cmake_minimum_required(VERSION 3.5)
project(ped_vehicle_detect)

find_package(OpenCV REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread -std=c++11 ")


# define the source files
set(SOURCE_FILES main.cpp
	   vetroi.cpp
	   vetdetectorfactory.cpp
	   vetdetectorstrategy.cpp
	   vethaardetector.cpp
	   vethogsvmdetector.cpp
	   vetcolordetector.cpp
	   vetoptflowdetector.cpp
	   vetcascadedetector.cpp
	   vettracker.cpp
	   vetuserstrategy.cpp
	   vetusercontext.cpp
	   vettestmode.cpp
	   vetevaluator.cpp
	   vetuser.cpp
	   vetutils.cpp
	   veterror.cpp
	   vetfastvideocapture.cpp
	   vetkmeans.cpp
	   vetconcurrentqueue.cpp)
add_executable(ped_vehicle_detect ${SOURCE_FILES})

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(ped_vehicle_detect ${OpenCV_LIBS}) # replace binary_name
