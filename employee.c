#include "employee.h"
#include <stdio.h>
#include <string.h>

#define EMPLOYEE_FILE "Employees.dat"

// Helper: Get next unique employee ID
static int getNextEmployeeId() {
    FILE *file = fopen(EMPLOYEE_FILE, "rb");
    if (!file) return 1;
    Employee emp;
    int maxId = 0;
    // Find the highest existing employee ID
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id > maxId) maxId = emp.id;
    }
    fclose(file);
    return maxId + 1;
}

// Add a new employee and save to file
void addEmployee() {
    Employee emp;
    emp.id = getNextEmployeeId();
    printf("Enter name: ");
    scanf("%49s", emp.name);
    printf("Enter position: ");
    scanf("%29s", emp.position);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    emp.attendanceDays = 0;
    emp.bonus = 0;
    emp.deduction = 0;
    FILE *file = fopen(EMPLOYEE_FILE, "ab");
    if (!file) { printf("Error opening file!\n"); return; }
    fwrite(&emp, sizeof(Employee), 1, file);
    fclose(file);
    printf("Employee added with ID %d.\n", emp.id);
}

// Update an existing employee's details
void updateEmployee() {
    int id;
    printf("Enter employee ID to update: ");
    scanf("%d", &id);
    FILE *file = fopen(EMPLOYEE_FILE, "rb+");
    if (!file) { printf("Error opening file!\n"); return; }
    Employee emp;
    int found = 0;
    long pos;
    // Search for the employee by ID
    while ((pos = ftell(file)), fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            found = 1;
            printf("Enter new name: ");
            scanf("%49s", emp.name);
            printf("Enter new position: ");
            scanf("%29s", emp.position);
            printf("Enter new salary: ");
            scanf("%f", &emp.salary);
            fseek(file, pos, SEEK_SET);
            fwrite(&emp, sizeof(Employee), 1, file);
            printf("Employee updated.\n");
            break;
        }
    }
    if (!found) printf("Employee not found.\n");
    fclose(file);
}

// Delete an employee by ID
void deleteEmployee() {
    int id;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);
    FILE *file = fopen(EMPLOYEE_FILE, "rb");
    if (!file) { printf("Error opening file!\n"); return; }
    FILE *temp = fopen("temp.dat", "wb");
    Employee emp;
    int found = 0;
    // Copy all employees except the one to delete
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            found = 1;
            continue;
        }
        fwrite(&emp, sizeof(Employee), 1, temp);
    }
    fclose(file); fclose(temp);
    remove(EMPLOYEE_FILE);
    rename("temp.dat", EMPLOYEE_FILE);
    if (found) printf("Employee deleted.\n");
    else printf("Employee not found.\n");
}

// List all employees
void listEmployees() {
    FILE *file = fopen(EMPLOYEE_FILE, "rb");
    if (!file) { printf("No employees found.\n"); return; }
    Employee emp;
    printf("\n%-5s %-20s %-15s %-10s\n", "ID", "Name", "Position", "Salary");
    printf("------------------------------------------------------\n");
    while (fread(&emp, sizeof(Employee), 1, file)) {
        printf("%-5d %-20s %-15s %-10.2f\n", emp.id, emp.name, emp.position, emp.salary);
    }
    fclose(file);
}

// Find an employee by ID (returns pointer to static struct)
Employee* findEmployeeById(int id) {
    static Employee emp;
    FILE *file = fopen(EMPLOYEE_FILE, "rb");
    if (!file) return NULL;
    while (fread(&emp, sizeof(Employee), 1, file)) {
        if (emp.id == id) {
            fclose(file);
            return &emp;
        }
    }
    fclose(file);
    return NULL;
}
