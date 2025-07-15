#ifndef PAYROLL_H
#define PAYROLL_H

// Payroll structure
typedef struct {
    int employeeId;
    char period[10]; // e.g., "2024-06"
    float grossSalary;
    float netSalary;
    float bonus;
    float deduction;
} Payroll;

// Function prototypes
void calculatePayroll();
void generatePayrollReport();
void listPayrolls();

#endif // PAYROLL_H
