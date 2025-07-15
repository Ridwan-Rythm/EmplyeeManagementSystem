#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <time.h>

// Attendance structure
typedef struct {
    int employeeId;
    char date[11]; // YYYY-MM-DD
    char status[10]; // Present, Absent, Late, etc.
} Attendance;

// Function prototypes
void logAttendance();
void listAttendance();
void viewAttendanceHistory(int employeeId);

#endif // ATTENDANCE_H
