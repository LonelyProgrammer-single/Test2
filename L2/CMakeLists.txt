cmake_minimum_required(VERSION 3.10) # Specify the minimum required CMake version
project(MyExecutable LANGUAGES CXX)  # Define the project name and enable C++ support

set(CMAKE_CXX_STANDARD 17)          # Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Ensure the specified C++ standard is used

# Add an executable target, specifying its name and source files
add_executable(main.cpp)
