cmake_minimum_required(VERSION 3.10)
project(EmployeeManagementSystem C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")

# Add all your source files here
set(SOURCES
        EmployeeManagement.c
        employee.c
        attendance.c
        payroll.c
        utils.c
        auth.c
        role.c
        fileio.c
)

add_executable(EmployeeManagementSystem ${SOURCES})
