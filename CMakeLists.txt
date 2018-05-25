cmake_minimum_required(VERSION 3.10)
project(cpp17test)

set(CMAKE_CXX_STANDARD 17)

add_executable(cpp17test main.cpp app/BaseWriter.cpp app/BaseWriter.h app/ConsoleWriter.cpp app/ConsoleWriter.h)