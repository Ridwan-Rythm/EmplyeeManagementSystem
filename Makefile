# Makefile for Employee Management System
# This Makefile compiles all modules and links them into the final executable.
# Usage:
#   make        # Build the project
#   make clean  # Remove build artifacts and data/log files

# Compiler and flags
CC=gcc
CFLAGS=-Wall -Wextra -std=c99

# Source files
OBJS=EmployeeManagement.c employee.c role.c attendance.c payroll.c auth.c fileio.c utils.c

# Output executable name
TARGET=EmployeeManagementSystem

# Default target: build the executable
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Clean up build artifacts, data, and log files
clean:
	rm -f $(TARGET) *.o *.dat *.log 