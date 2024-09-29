cmake_minimum_required(VERSION 3.10)

# Project name
project(InventoryManagementSystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(MyExecutable src/main.cpp)

# Include directories
include_directories(include)

# Optionally, link libraries
# target_link_libraries(MyExecutable PRIVATE SomeLibrary)
