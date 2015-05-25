cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0020 NEW)
cmake_policy(SET CMP0043 NEW)
cmake_policy(SET CMP0048 NEW)

project(QWebInspectorTest VERSION 1.0.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

if(APPLE)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -stdlib=libc++")
elseif(UNIX)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

find_package(Qt5WebKitWidgets REQUIRED)

add_executable(QWebInspectorTest WIN32 main.cpp MainWindow.cpp)
target_link_libraries(QWebInspectorTest Qt5::WebKitWidgets)

