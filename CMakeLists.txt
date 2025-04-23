cmake_minimum_required(VERSION 3.20)
project(Task-Tracker)

add_executable(
  Task-Tracker
  main.cpp
  task.cpp
)

target_include_directories(
  Task-Tracker PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
)