cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(NCursesPlus)

include(ncursesplus_config.cmake)
configure_file(
	"${PROJECT_SOURCE_DIR}/version_config.hpp.cmake"
	"${PROJECT_SOURCE_DIR}/include/config/version.hpp"
)

include_directories(
	"${PROJECT_SOURCE_DIR}/include"
	"${PROJECT_SOURCE_DIR}/gtest"
	"${PROJECT_SOURCE_DIR}"
)

add_subdirectory(gtest)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${PROJECT_SOURCE_DIR}/cmake")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
set(CMAKE_CXX_FLAGS "-std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "-g -DDEBUG")
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -static -lm")

set(SOURCES
	"src/application.cpp"
)

set(HEADERS
	"include/application.hpp"
	"include/position.hpp"
	"include/size.hpp"
	"include/window.hpp"
)

set(IMPLEMENTATIONS
	"impl/position.hpp"
	"impl/size.hpp"
	"impl/window.hpp"
)

add_library(${LIBRARY_NAME_STATIC} STATIC ${HEADERS} ${IMPLEMENTATIONS} ${SOURCES})
add_library(${LIBRARY_NAME} SHARED ${HEADERS} ${IMPLEMENTATIONS} ${SOURCES})

if(MAKE_TESTS)
	add_subdirectory(tests)
endif(MAKE_TESTS)
