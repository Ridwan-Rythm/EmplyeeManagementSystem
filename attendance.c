#include "attendance.h"
#include <stdio.h>
#include <string.h>

#define ATTENDANCE_FILE "Attendance.dat"

// Log attendance for an employee on a specific date
void logAttendance() {
    Attendance att;
    printf("Enter employee ID: ");
    scanf("%d", &att.employeeId);
    printf("Enter date (YYYY-MM-DD): ");
    scanf("%10s", att.date);
    printf("Enter status (Present/Absent/Late): ");
    scanf("%9s", att.status);
    FILE *file = fopen(ATTENDANCE_FILE, "ab");
    if (!file) { printf("Error opening file!\n"); return; }
    fwrite(&att, sizeof(Attendance), 1, file);
    fclose(file);
    printf("Attendance logged.\n");
}

// List all attendance records
void listAttendance() {
    FILE *file = fopen(ATTENDANCE_FILE, "rb");
    if (!file) { printf("No attendance records found.\n"); return; }
    Attendance att;
    printf("\n%-10s %-12s %-10s\n", "EmpID", "Date", "Status");
    printf("-------------------------------\n");
    while (fread(&att, sizeof(Attendance), 1, file)) {
        printf("%-10d %-12s %-10s\n", att.employeeId, att.date, att.status);
    }
    fclose(file);
}

// View attendance history for a specific employee
void viewAttendanceHistory(int employeeId) {
    FILE *file = fopen(ATTENDANCE_FILE, "rb");
    if (!file) { printf("No attendance records found.\n"); return; }
    Attendance att;
    printf("\nAttendance history for Employee ID %d:\n", employeeId);
    printf("%-12s %-10s\n", "Date", "Status");
    printf("---------------------\n");
    int found = 0;
    while (fread(&att, sizeof(Attendance), 1, file)) {
        if (att.employeeId == employeeId) {
            printf("%-12s %-10s\n", att.date, att.status);
            found = 1;
        }
    }
    if (!found) printf("No records for this employee.\n");
    fclose(file);
}
