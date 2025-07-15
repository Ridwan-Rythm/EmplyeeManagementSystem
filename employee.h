#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <stdio.h>

// Employee structure
typedef struct {
    int id;
    char name[50];
    char position[30];
    float salary;
    int attendanceDays;
    float bonus;
    float deduction;
} Employee;

// Function prototypes
void addEmployee();
void updateEmployee();
void deleteEmployee();
void listEmployees();
Employee* findEmployeeById(int id);

#endif // EMPLOYEE_H
