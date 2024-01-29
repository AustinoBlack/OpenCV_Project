cmake_minimum_required(VERSION 3.27)
project(Photo)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
find_package(OpenCV REQUIRED)

add_executable( out test_crop.cpp )

add_test( Border-test out "cmake-build-debug/TEST.jpg")
add_test( Border-test2 out "cmake-build-debug/TEST2.jpeg")

target_link_libraries( out ${OpenCV_LIBS})