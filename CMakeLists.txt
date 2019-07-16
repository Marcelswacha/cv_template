cmake_minimum_required(VERSION 3.5)
project(VideoCapture)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(OpenCV REQUIRED)
include_directories(${OPENCV_INCLUDE_DIR})

set(SOURCE_FILES
    src/main.cpp)

add_executable(VideoCapture ${SOURCE_FILES})
target_link_libraries(VideoCapture ${OpenCV_LIBS})