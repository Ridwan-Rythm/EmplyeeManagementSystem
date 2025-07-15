// EmployeeManagement.c
// Main source file for the Employee Management System
// This program manages employee records, attendance, payroll, and related operations.
// Author: [Your Name]
// Date: [Date]

#include <stdio.h>
#include <string.h>
#include "employee.h"
#include "role.h"
#include "attendance.h"
#include "payroll.h"
#include "auth.h"
#include "fileio.h"
#include "utils.h"

// Function prototypes
void adminMenu();
void hrMenu();

// Main function: Entry point of the program
int main()
{
    printf("\n========================================\n");
    printf("   Welcome to Employee Management System\n");
    printf("========================================\n\n");

    User loggedInUser;
    int loginSuccess = 0;
    while (!loginSuccess) {
        printf("Please log in to continue.\n");
        loginSuccess = login(&loggedInUser);
        if (!loginSuccess) {
            printError("Invalid username or password. Please try again.\n");
        }
    }

    printf("\nLogin successful! Welcome, %s.\n", loggedInUser.username);

    // Show menu based on user role
    if (loggedInUser.role == ROLE_ADMIN) {
        adminMenu();
    } else if (loggedInUser.role == ROLE_HR) {
        hrMenu();
    } else {
        printError("Unknown user role. Exiting.\n");
    }

    printf("\nThank you for using the Employee Management System. Goodbye!\n");
    return 0;
}

// Admin main menu
void adminMenu() {
    int choice;
    do {
        printf("\n--- Admin Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Update Employee\n");
        printf("3. Delete Employee\n");
        printf("4. List Employees\n");
        printf("5. Manage Job Roles\n");
        printf("6. Log Attendance\n");
        printf("7. Calculate Payroll\n");
        printf("8. Generate Payroll Report\n");
        printf("9. Backup Data\n");
        printf("10. Restore Data\n");
        printf("0. Logout\n");
        choice = getInt("Enter your choice: ");
        switch (choice) {
            case 1: addEmployee(); break;
            case 2: updateEmployee(); break;
            case 3: deleteEmployee(); break;
            case 4: listEmployees(); break;
            case 5: listRoles(); /* addRole(), updateRole(), deleteRole() as needed */ break;
            case 6: logAttendance(); break;
            case 7: calculatePayroll(); break;
            case 8: generatePayrollReport(); break;
            case 9: backupData("backup/"); break;
            case 10: restoreData("backup/"); break;
            case 0: printf("Logging out...\n"); break;
            default: printError("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}

// HR main menu
void hrMenu() {
    int choice;
    do {
        printf("\n--- HR Menu ---\n");
        printf("1. Log Attendance\n");
        printf("2. List Attendance\n");
        printf("3. View Employee List\n");
        printf("4. Generate Payroll Report\n");
        printf("0. Logout\n");
        choice = getInt("Enter your choice: ");
        switch (choice) {
            case 1: logAttendance(); break;
            case 2: listAttendance(); break;
            case 3: listEmployees(); break;
            case 4: generatePayrollReport(); break;
            case 0: printf("Logging out...\n"); break;
            default: printError("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);
}