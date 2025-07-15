# SRS Requirements 

## Functional Requirements

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-01                                                                 |
| Actor           | Admin                                                                 |
| Description     | Admin can insert new employee records.                                |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-02                                                                 |
| Actor           | Admin                                                                 |
| Description     | Admin can delete existing employee records.                           |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-03                                                                 |
| Actor           | Admin                                                                 |
| Description     | Admin can update employee details (name, position, salary, etc.).     |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-04                                                                 |
| Actor           | System                                                                |
| Description     | System assigns a unique identifier to each employee.                  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-05                                                                 |
| Actor           | Admin                                                                 |
| Description     | Admin can modify employee job roles or positions.                     |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-06                                                                 |
| Actor           | Admin                                                                 |
| Description     | System maintains a list of valid job roles.                           |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-07                                                                 |
| Actor           | HR                                                                    |
| Description     | System allows HR to track and log daily attendance.                   |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-08                                                                 |
| Actor           | System                                                                |
| Description     | System stores attendance history for each employee.                   |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-09                                                                 |
| Actor           | System                                                                |
| Description     | System calculates salary based on attendance and salary structure.    |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-10                                                                 |
| Actor           | System                                                                |
| Description     | System includes bonuses and deductions in salary calculations.        |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-11                                                                 |
| Actor           | System                                                                |
| Description     | System processes and generates payroll periodically.                  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-12                                                                 |
| Actor           | System                                                                |
| Description     | System manages and stores predefined salary structures.               |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-13                                                                 |
| Actor           | Admin                                                                 |
| Description     | Admin can modify salary components (basic pay, bonuses, deductions).  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-14                                                                 |
| Actor           | System                                                                |
| Description     | System stores all data using file handling techniques.                |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-15                                                                 |
| Actor           | System                                                                |
| Description     | System retrieves and displays stored data on request.                 |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-16                                                                 |
| Actor           | System                                                                |
| Description     | System ensures data integrity during file operations.                 |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-17                                                                 |
| Actor           | System                                                                |
| Description     | System provides a menu-driven, user-friendly interface.               |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-18                                                                 |
| Actor           | User                                                                  |
| Description     | Users can navigate to employee list, attendance, payroll options easily. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-19                                                                 |
| Actor           | HR                                                                    |
| Description     | HR can view a list of all employees.                                  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-20                                                                 |
| Actor           | System                                                                |
| Description     | System displays individual employee attendance and payroll summaries.  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-21                                                                 |
| Actor           | Admin, HR                                                             |
| Description     | System requires login for Admin and HR users.                         |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-22                                                                 |
| Actor           | System                                                                |
| Description     | System restricts access to features based on user role (Admin vs HR). |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-23                                                                 |
| Actor           | Admin                                                                 |
| Description     | System allows Admin to back up and restore data files.                |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-24                                                                 |
| Actor           | System                                                                |
| Description     | System logs critical actions (e.g., record creation, deletion, payroll processing). |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-25                                                                 |
| Actor           | Admin, HR                                                             |
| Description     | System allows searching/filtering employees by name, role, or other criteria. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-26                                                                 |
| Actor           | System                                                                |
| Description     | System validates user input and displays meaningful error messages.    |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-27                                                                 |
| Actor           | Admin, HR                                                             |
| Description     | System can export or print employee lists, attendance, or payroll summaries. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | FR-28                                                                 |
| Actor           | System                                                                |
| Description     | System records timestamps for attendance and payroll processing.       |

---

## Non-Functional Requirements

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-01                                                                |
| Actor           | System                                                                |
| Description     | The system should respond to user actions within 2 seconds for all menu operations. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-02                                                                |
| Actor           | System                                                                |
| Description     | File operations (read/write) should complete within 3 seconds for up to 1000 employee records. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-03                                                                |
| Actor           | System                                                                |
| Description     | The system should not lose or corrupt data during normal operations or unexpected shutdowns. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-04                                                                |
| Actor           | System                                                                |
| Description     | The system should be available for use at least 99% of the time during business hours. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-05                                                                |
| Actor           | System                                                                |
| Description     | The user interface should be intuitive and require no more than 1 hour of training for a new user. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-06                                                                |
| Actor           | System                                                                |
| Description     | Error messages should be clear and guide the user to resolve issues.  |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-07                                                                |
| Actor           | System                                                                |
| Description     | Only authorized users (Admin, HR) should access the system's features.|

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-08                                                                |
| Actor           | System                                                                |
| Description     | User passwords (if implemented) should not be stored in plain text.   |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-09                                                                |
| Actor           | System                                                                |
| Description     | Sensitive data should be protected from unauthorized access.          |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-10                                                                |
| Actor           | System                                                                |
| Description     | The code should be modular and well-commented to facilitate future updates. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-11                                                                |
| Actor           | System                                                                |
| Description     | System configuration (e.g., file paths, backup locations) should be easy to modify. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-12                                                                |
| Actor           | System                                                                |
| Description     | The system should run on any Linux-based environment with a standard C compiler. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-13                                                                |
| Actor           | System                                                                |
| Description     | The system should support up to 1000 employee records without significant performance degradation. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-14                                                                |
| Actor           | System                                                                |
| Description     | The system should provide mechanisms for regular data backup and easy recovery. |

---

| Field           | Value                                                                 |
|-----------------|-----------------------------------------------------------------------|
| Requirement ID  | NFR-15                                                                |
| Actor           | System                                                                |
| Description     | The system should comply with relevant data protection and privacy regulations, if applicable. |

--- 
