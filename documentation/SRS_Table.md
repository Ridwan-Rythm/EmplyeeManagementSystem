# SRS Requirements (Table Per Requirement)

## Functional Requirements

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-01                                                                 |
| Category/Module | Employee Management                                                   |
| Description     | Admin can insert new employee records.                                |
| Inputs          | Employee Name, Contact Information, Initial Job Role, Salary details. |
| Outputs         | Confirmation of record creation.                                      |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-02                                                                 |
| Category/Module | Employee Management                                                   |
| Description     | Admin can delete existing employee records.                           |
| Inputs          | Employee Unique Identifier.                                           |
| Outputs         | Confirmation of record deletion.                                      |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-03                                                                 |
| Category/Module | Employee Management                                                   |
| Description     | Admin can update employee details (name, position, salary, etc.).     |
| Inputs          | Employee Unique Identifier, updated employee details.                 |
| Outputs         | Confirmation of record update.                                        |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-04                                                                 |
| Category/Module | Employee Management                                                   |
| Description     | System assigns a unique identifier to each employee.                  |
| Inputs          | -                                                                     |
| Outputs         | Unique Employee ID.                                                   |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-05                                                                 |
| Category/Module | Job Role Management                                                   |
| Description     | Admin can modify employee job roles or positions.                     |
| Inputs          | Employee Unique Identifier, new Job Role/Position.                    |
| Outputs         | Confirmation of job role update.                                      |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-06                                                                 |
| Category/Module | Job Role Management                                                   |
| Description     | System maintains a list of valid job roles.                           |
| Inputs          | New Job Role, Edited Job Role, Job Role to Delete (for Admin).        |
| Outputs         | List of valid job roles.                                              |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-07                                                                 |
| Category/Module | Attendance Tracking                                                   |
| Description     | System allows HR to track and log daily attendance.                   |
| Inputs          | Employee Unique Identifier, Date, Attendance Status.                  |
| Outputs         | Confirmation of attendance logged.                                    |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-08                                                                 |
| Category/Module | Attendance Tracking                                                   |
| Description     | System stores attendance history for each employee.                   |
| Inputs          | -                                                                     |
| Outputs         | Stored attendance records.                                            |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-09                                                                 |
| Category/Module | Payroll Management                                                    |
| Description     | System calculates salary based on attendance and salary structure.    |
| Inputs          | Employee Unique Identifier, Payroll Period, Attendance Records, Salary Structure. |
| Outputs         | Calculated Gross Salary.                                              |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-10                                                                 |
| Category/Module | Payroll Management                                                    |
| Description     | System includes bonuses and deductions in salary calculations.        |
| Inputs          | Bonuses, Deductions.                                                  |
| Outputs         | Salary with bonuses and deductions applied.                           |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-11                                                                 |
| Category/Module | Payroll Management                                                    |
| Description     | System processes and generates payroll periodically.                  |
| Inputs          | Payroll Period (e.g., monthly).                                       |
| Outputs         | Generated payroll summaries/reports.                                  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-12                                                                 |
| Category/Module | Salary Management                                                     |
| Description     | System manages and stores predefined salary structures.               |
| Inputs          | Salary Structure Name, Components (for Admin).                        |
| Outputs         | List of predefined salary structures.                                 |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-13                                                                 |
| Category/Module | Salary Management                                                     |
| Description     | Admin can modify salary components (basic pay, bonuses, deductions).  |
| Inputs          | Salary Structure Identifier, updated components.                      |
| Outputs         | Confirmation of salary component update.                              |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-14                                                                 |
| Category/Module | Data Handling                                                         |
| Description     | System stores all data using file handling techniques.                |
| Inputs          | -                                                                     |
| Outputs         | Data written to files.                                                |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-15                                                                 |
| Category/Module | Data Handling                                                         |
| Description     | System retrieves and displays stored data on request.                 |
| Inputs          | Data retrieval request.                                               |
| Outputs         | Retrieved and displayed data.                                         |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-16                                                                 |
| Category/Module | Data Handling                                                         |
| Description     | System ensures data integrity during file operations.                 |
| Inputs          | -                                                                     |
| Outputs         | Error messages on data integrity issues.                              |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-17                                                                 |
| Category/Module | User Interface                                                        |
| Description     | System provides a menu-driven, user-friendly interface.               |
| Inputs          | -                                                                     |
| Outputs         | Interactive menu.                                                     |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-18                                                                 |
| Category/Module | User Interface                                                        |
| Description     | Users can navigate to employee list, attendance, payroll options easily. |
| Inputs          | -                                                                     |
| Outputs         | Navigable menu options.                                               |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-19                                                                 |
| Category/Module | Reporting & Viewing                                                   |
| Description     | HR can view a list of all employees.                                  |
| Inputs          | Request to view employee list.                                        |
| Outputs         | Displayed list of employees.                                          |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-20                                                                 |
| Category/Module | Reporting & Viewing                                                   |
| Description     | System displays individual employee attendance and payroll summaries.  |
| Inputs          | Employee Unique Identifier, Request for attendance/payroll summary.    |
| Outputs         | Displayed individual attendance history and payroll summary.           |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-21                                                                 |
| Category/Module | User Authentication                                                   |
| Description     | System requires login for Admin and HR users.                         |
| Inputs          | Username, Password.                                                   |
| Outputs         | Authentication status, access granted/denied.                         |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-22                                                                 |
| Category/Module | User Authorization                                                    |
| Description     | System restricts access to features based on user role (Admin vs HR). |
| Inputs          | User role, requested feature.                                         |
| Outputs         | Access granted/denied based on role.                                  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-23                                                                 |
| Category/Module | Data Backup & Recovery                                                |
| Description     | System allows Admin to back up and restore data files.                |
| Inputs          | Backup request, file selection.                                       |
| Outputs         | Backup confirmation, restored data.                                   |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-24                                                                 |
| Category/Module | Audit Logging                                                         |
| Description     | System logs critical actions (e.g., record creation, deletion, payroll processing). |
| Inputs          | Action performed, user, timestamp.                                    |
| Outputs         | Log entry created.                                                    |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-25                                                                 |
| Category/Module | Search & Filter                                                       |
| Description     | System allows searching/filtering employees by name, role, or other criteria. |
| Inputs          | Search criteria, filter parameters.                                   |
| Outputs         | Filtered employee list.                                               |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-26                                                                 |
| Category/Module | Error Handling                                                        |
| Description     | System validates user input and displays meaningful error messages.    |
| Inputs          | User input.                                                           |
| Outputs         | Validation result, error message if invalid.                          |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-27                                                                 |
| Category/Module | Export/Print Reports                                                  |
| Description     | System can export or print employee lists, attendance, or payroll summaries. |
| Inputs          | Export request, report type, format.                                  |
| Outputs         | Exported/printed report.                                              |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| ID              | FR-28                                                                 |
| Category/Module | Date/Time Management                                                  |
| Description     | System records timestamps for attendance and payroll processing.       |
| Inputs          | Action performed.                                                     |
| Outputs         | Timestamp recorded.                                                   |

---

## Non-Functional Requirements

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-01                                                               |
| Category   | Performance                                                          |
| Description| The system should respond to user actions within 2 seconds for all menu operations. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-02                                                               |
| Category   | Performance                                                          |
| Description| File operations (read/write) should complete within 3 seconds for up to 1000 employee records. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-03                                                               |
| Category   | Reliability                                                          |
| Description| The system should not lose or corrupt data during normal operations or unexpected shutdowns. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-04                                                               |
| Category   | Availability                                                         |
| Description| The system should be available for use at least 99% of the time during business hours. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-05                                                               |
| Category   | Usability                                                            |
| Description| The user interface should be intuitive and require no more than 1 hour of training for a new user. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-06                                                               |
| Category   | Usability                                                            |
| Description| Error messages should be clear and guide the user to resolve issues.  |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-07                                                               |
| Category   | Security                                                             |
| Description| Only authorized users (Admin, HR) should access the system's features.|

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-08                                                               |
| Category   | Security                                                             |
| Description| User passwords (if implemented) should not be stored in plain text.   |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-09                                                               |
| Category   | Security                                                             |
| Description| Sensitive data should be protected from unauthorized access.          |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-10                                                               |
| Category   | Maintainability                                                      |
| Description| The code should be modular and well-commented to facilitate future updates. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-11                                                               |
| Category   | Maintainability                                                      |
| Description| System configuration (e.g., file paths, backup locations) should be easy to modify. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-12                                                               |
| Category   | Portability                                                          |
| Description| The system should run on any Linux-based environment with a standard C compiler. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-13                                                               |
| Category   | Scalability                                                          |
| Description| The system should support up to 1000 employee records without significant performance degradation. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-14                                                               |
| Category   | Backup & Recovery                                                    |
| Description| The system should provide mechanisms for regular data backup and easy recovery. |

---

| Field      | Value                                                                 |
|------------|-----------------------------------------------------------------------|
| ID         | NFR-15                                                               |
| Category   | Compliance                                                           |
| Description| The system should comply with relevant data protection and privacy regulations, if applicable. |

--- 