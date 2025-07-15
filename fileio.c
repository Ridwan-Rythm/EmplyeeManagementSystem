#include "fileio.h"
#include <stdio.h>
#include <string.h>

// Helper: Copy a file
static int copyFile(const char *src, const char *dest) {
    FILE *fsrc = fopen(src, "rb");
    if (!fsrc) return 0;
    FILE *fdest = fopen(dest, "wb");
    if (!fdest) { fclose(fsrc); return 0; }
    char buf[1024];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), fsrc)) > 0) {
        fwrite(buf, 1, n, fdest);
    }
    fclose(fsrc);
    fclose(fdest);
    return 1;
}

int backupData(const char *backupPath) {
    // Copy all .dat files to backupPath
    char dest[256];
    int ok = 1;
    ok &= (snprintf(dest, sizeof(dest), "%s/Employees.dat", backupPath), copyFile("Employees.dat", dest));
    ok &= (snprintf(dest, sizeof(dest), "%s/Roles.dat", backupPath), copyFile("Roles.dat", dest));
    ok &= (snprintf(dest, sizeof(dest), "%s/Attendance.dat", backupPath), copyFile("Attendance.dat", dest));
    ok &= (snprintf(dest, sizeof(dest), "%s/Payroll.dat", backupPath), copyFile("Payroll.dat", dest));
    if (ok) printf("Backup completed.\n");
    else printf("Backup failed.\n");
    return ok;
}

int restoreData(const char *backupPath) {
    // Copy all .dat files from backupPath
    char src[256];
    int ok = 1;
    ok &= (snprintf(src, sizeof(src), "%s/Employees.dat", backupPath), copyFile(src, "Employees.dat"));
    ok &= (snprintf(src, sizeof(src), "%s/Roles.dat", backupPath), copyFile(src, "Roles.dat"));
    ok &= (snprintf(src, sizeof(src), "%s/Attendance.dat", backupPath), copyFile(src, "Attendance.dat"));
    ok &= (snprintf(src, sizeof(src), "%s/Payroll.dat", backupPath), copyFile(src, "Payroll.dat"));
    if (ok) printf("Restore completed.\n");
    else printf("Restore failed.\n");
    return ok;
}

// The following are handled in their respective modules, so just stubs here:
int saveEmployeesToFile() { return 1; }
int loadEmployeesFromFile() { return 1; }
int saveRolesToFile() { return 1; }
int loadRolesFromFile() { return 1; }
int saveAttendanceToFile() { return 1; }
int loadAttendanceFromFile() { return 1; }
int savePayrollsToFile() { return 1; }
int loadPayrollsFromFile() { return 1; }

