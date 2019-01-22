cmake_minimum_required(VERSION 3.5)
project(rect_grabber)

find_package(OpenCV REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11 ")


# define the source files
set(SOURCE_FILES main.cpp
	   utils.cpp)
add_executable(rect_grabber ${SOURCE_FILES})

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(rect_grabber ${OpenCV_LIBS}) # replace binary_name
