cmake_minimum_required(VERSION 3.18)
project(chef_simple_interpreter)

set(CMAKE_CXX_STANDARD 17)

include_directories(antlr4-runtime)
#link_directories(lib)

add_executable(chef_simple_interpreter src/main.cpp src/gen/RRBaseVisitor.cpp src/gen/RRLexer.cpp src/gen/RRParser.cpp src/gen/RRVisitor.cpp src/Interpreter.cpp src/State.cpp)

#target_link_libraries(chef_simple_interpreter ${CMAKE_SOURCE_DIR}/lib/libantlr4-runtime.a)
target_link_libraries(chef_simple_interpreter antlr4-runtime)
