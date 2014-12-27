cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

link_directories(
	"../gtest/"
	"../lib/"
)

include_directories(
  "../gtest/"
	"../include/"
	"../"
)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(LINK_LIBS gtest gtest_main ncursesplus_static)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/tests/bin")

add_executable(application application.cpp)
target_link_libraries(application "${LINK_LIBS}")
