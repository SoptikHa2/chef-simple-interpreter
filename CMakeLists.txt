cmake_minimum_required(VERSION 3.25)
project(chef_simple_interpreter)

set(CMAKE_CXX_STANDARD 17)

include_directories(antlr4-runtime)
link_directories(lib)

add_executable(chef_simple_interpreter src/main.cpp src/ŘBaseVisitor.cpp src/ŘLexer.cpp src/ŘParser.cpp src/ŘVisitor.cpp)

target_link_libraries(chef_simple_interpreter ${CMAKE_SOURCE_DIR}/lib/libantlr4-runtime.a)
