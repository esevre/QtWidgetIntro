cmake_minimum_required(VERSION 3.12)
project(QtWidgetIntro)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 REQUIRED widgets)
set(CMAKE_AUTOMOC ON)

add_executable(QtWidgetIntro main.cpp MyAwesomeWindow.cpp MyAwesomeWindow.hpp)
target_link_libraries(QtWidgetIntro Qt5::Widgets)
