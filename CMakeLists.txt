cmake_minimum_required(VERSION 3.16)
project(Aluminum)

set(CMAKE_CXX_STANDARD 17)


# creating variables for antlr4's files
set(antlr4-generated-files-dir ${CMAKE_SOURCE_DIR}/grammar/Aluminum)
set(antlr4-lib ${CMAKE_SOURCE_DIR}/external_library_builds/antlr4/usr/local/lib)
set(antlr4-include ${CMAKE_SOURCE_DIR}/external_library_builds/antlr4/usr/local/include/antlr4-runtime)

# Putting all the generated lexing/parsing files in a list
FILE(GLOB generated_files ${antlr4-generated-files-dir}/*.cpp)
foreach(generated_file ${generated_files})
    list(APPEND antlr4-generated-files ${generated_file})
    set_source_files_properties(
            ${generated_file}
            PROPERTIES
            COMPILE_FLAGS -Wno-overloaded-virtual
    )
endforeach(generated_file)

# Create variables for LLVM
set(llvm-lib ${CMAKE_SOURCE_DIR}/external_library_builds/llvm/install/lib)
set(LLVM_DIR ${llvm-lib}/cmake/llvm)
find_package(LLVM REQUIRED CONFIG PATHS ${llvm-lib}/cmake/llvm)
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})
llvm_map_components_to_libnames(llvm_libs support core irreader)
message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(aluminum src/main.cpp ${antlr4-generated-files} src/Aluminum_IR_Code_Generator.cpp)


target_include_directories(aluminum PUBLIC ${antlr4-generated-files-dir} ${antlr4-include})
target_link_directories(aluminum PUBLIC ${antlr4-lib})
target_link_libraries(aluminum ${antlr4-lib}/libantlr4-runtime.a)

# for LLVM
target_link_libraries(aluminum ${llvm_libs})
#target_include_directories(aluminum PUBLIC ${llvm-include})
#target_link_directories(aluminum PUBLIC ${llvm-lib})
#target_link_libraries(aluminum ${llvm-lib-files})
#target_link_libraries(aluminum LLVMSupport)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)


target_link_libraries(aluminum Threads::Threads)

