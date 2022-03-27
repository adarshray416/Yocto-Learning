cmake_minimum_required(VERSION 2.8.3)
project(animal)

# C++0x support - not quite the same as final C++11!
# use carefully;  can interfere with point-cloud library
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_executable(animal animal.cpp main.cpp)
install(TARGETS animal RUNTIME DESTINATION bin)