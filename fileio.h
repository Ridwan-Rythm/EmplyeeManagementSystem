#ifndef FILEIO_H
#define FILEIO_H

// Function prototypes
int saveEmployeesToFile();
int loadEmployeesFromFile();
int saveRolesToFile();
int loadRolesFromFile();
int saveAttendanceToFile();
int loadAttendanceFromFile();
int savePayrollsToFile();
int loadPayrollsFromFile();
int backupData(const char *backupPath);
int restoreData(const char *backupPath);

#endif // FILEIO_H

