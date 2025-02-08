cmake_minimum_required(VERSION 3.30)
project(bank)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(bank
    Admin.h
    "bank system.cpp"
    Client.h
    Employee.h
    Person.h
    Validation.h)

set(CMAKE_CXX_STANDARD 11)  # Use 11, 14, 17, 20, or 23 as needed
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # Ensure standard compliance
