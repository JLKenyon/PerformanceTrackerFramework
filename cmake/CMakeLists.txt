

CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

PROJECT(Performance_Tracker_Framework)

INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}/../include
)

FILE(GLOB PerformanceTracker_SRC ${CMAKE_SOURCE_DIR}/../src/*.cpp)

ADD_LIBRARY(
    PerformanceTracker STATIC ${PerformanceTracker_SRC}
)

# FILE(GLOB BlueJitter_APP ${CMAKE_SOURCE_DIR}/../src/apps/*.cpp)
