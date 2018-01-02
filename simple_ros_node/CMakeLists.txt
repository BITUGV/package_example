cmake_minimum_required(VERSION 2.8.3)

project(simple_ros_node)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11 ${CMAKE_CXX_FLAGS}")

## find ros packages and combine them with catkin
find_package(catkin REQUIRED COMPONENTS
        roscpp
)

## find system depends libraries 
find_package(OpenCV REQUIRED)


## ros specific cmake command
catkin_package(
        INCLUDE_DIRS include
        LIBRARIES ${PROJECT_NAME}_lib1
        CATKIN_DEPENDS ${catkin_deps}
        DEPENDS OpenCV
)

include_directories(
        include
        ${OpenCV_INCLUDE_DIRS}
        ${catkin_INCLUDE_DIRS}
)

####################   add a library ################################
####   This part is the same with the simple c++ project 
#####################################################################
add_library(${PROJECT_NAME}_lib1
        src/lib1.cpp)

target_link_libraries(${PROJECT_NAME}_lib1
        ${catkin_LIBRARIES}   # You have to add this as dependencies
        ${OpenCV_LIBRARIES})

#####################################################################
####   add a ros node executable file
#####################################################################
add_executable(${PROJECT_NAME}
        src/simple_ros_node.cpp)

target_link_libraries(${PROJECT_NAME}
        ${catkin_LIBRARIES}   ## add ros related libraries links
        ${PROJECT_NAME}_lib1)

