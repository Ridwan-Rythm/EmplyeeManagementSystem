#include "payroll.h"
#include "employee.h"
#include "attendance.h"
#include <stdio.h>
#include <string.h>

#define PAYROLL_FILE "Payroll.dat"
#define ATTENDANCE_FILE "Attendance.dat"
#define EMPLOYEE_FILE "Employees.dat"

// Helper: Count present days for an employee in a period (YYYY-MM)
static int countPresentDays(int employeeId, const char *period) {
    FILE *file = fopen(ATTENDANCE_FILE, "rb");
    if (!file) return 0;
    Attendance att;
    int count = 0;
    char periodPrefix[8];
    strncpy(periodPrefix, period, 7); // YYYY-MM
    periodPrefix[7] = '\0';
    // Count present days for the given period
    while (fread(&att, sizeof(Attendance), 1, file)) {
        if (att.employeeId == employeeId && strncmp(att.date, periodPrefix, 7) == 0 && strcmp(att.status, "Present") == 0) {
            count++;
        }
    }
    fclose(file);
    return count;
}

// Calculate payroll for all employees for a given period
void calculatePayroll() {
    char period[10];
    printf("Enter payroll period (YYYY-MM): ");
    scanf("%9s", period);
    FILE *empFile = fopen(EMPLOYEE_FILE, "rb");
    if (!empFile) { printf("No employees found.\n"); return; }
    FILE *payFile = fopen(PAYROLL_FILE, "ab");
    if (!payFile) { printf("Error opening payroll file!\n"); fclose(empFile); return; }
    Employee emp;
    // For each employee, calculate gross and net salary
    while (fread(&emp, sizeof(Employee), 1, empFile)) {
        Payroll pr;
        pr.employeeId = emp.id;
        strcpy(pr.period, period);
        pr.bonus = emp.bonus;
        pr.deduction = emp.deduction;
        int presentDays = countPresentDays(emp.id, period);
        pr.grossSalary = emp.salary * presentDays; // Simple: salary * days present
        pr.netSalary = pr.grossSalary + pr.bonus - pr.deduction;
        fwrite(&pr, sizeof(Payroll), 1, payFile);
    }
    fclose(empFile);
    fclose(payFile);
    printf("Payroll calculated for period %s.\n", period);
}

// Generate a payroll report for a specific period
void generatePayrollReport() {
    char period[10];
    printf("Enter payroll period to report (YYYY-MM): ");
    scanf("%9s", period);
    FILE *payFile = fopen(PAYROLL_FILE, "rb");
    if (!payFile) { printf("No payroll records found.\n"); return; }
    Payroll pr;
    printf("\n%-10s %-10s %-10s %-10s %-10s %-10s\n", "EmpID", "Period", "Gross", "Bonus", "Deduct", "Net");
    printf("-------------------------------------------------------------\n");
    int found = 0;
    // Print payroll records for the given period
    while (fread(&pr, sizeof(Payroll), 1, payFile)) {
        if (strcmp(pr.period, period) == 0) {
            printf("%-10d %-10s %-10.2f %-10.2f %-10.2f %-10.2f\n", pr.employeeId, pr.period, pr.grossSalary, pr.bonus, pr.deduction, pr.netSalary);
            found = 1;
        }
    }
    if (!found) printf("No payroll records for this period.\n");
    fclose(payFile);
}

// List all payroll records
void listPayrolls() {
    FILE *payFile = fopen(PAYROLL_FILE, "rb");
    if (!payFile) { printf("No payroll records found.\n"); return; }
    Payroll pr;
    printf("\n%-10s %-10s %-10s %-10s %-10s %-10s\n", "EmpID", "Period", "Gross", "Bonus", "Deduct", "Net");
    printf("-------------------------------------------------------------\n");
    while (fread(&pr, sizeof(Payroll), 1, payFile)) {
        printf("%-10d %-10s %-10.2f %-10.2f %-10.2f %-10.2f\n", pr.employeeId, pr.period, pr.grossSalary, pr.bonus, pr.deduction, pr.netSalary);
    }
    fclose(payFile);
}
