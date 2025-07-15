# SRS Requirements Table

## Functional Requirements

| ID     | Category/Module           | Description | Inputs | Outputs |
|--------|--------------------------|-------------|---------|---------|
| FR-01  | Employee Management      | Admin can insert new employee records. | Employee Name, Contact Information, Initial Job Role, Salary details. | Confirmation of record creation. |
| FR-02  | Employee Management      | Admin can delete existing employee records. | Employee Unique Identifier. | Confirmation of record deletion. |
| FR-03  | Employee Management      | Admin can update employee details (name, position, salary, etc.). | Employee Unique Identifier, updated employee details. | Confirmation of record update. |
| FR-04  | Employee Management      | System assigns a unique identifier to each employee. | - | Unique Employee ID. |
| FR-05  | Job Role Management      | Admin can modify employee job roles or positions. | Employee Unique Identifier, new Job Role/Position. | Confirmation of job role update. |
| FR-06  | Job Role Management      | System maintains a list of valid job roles. | New Job Role, Edited Job Role, Job Role to Delete (for Admin). | List of valid job roles. |
| FR-07  | Attendance Tracking      | System allows HR to track and log daily attendance. | Employee Unique Identifier, Date, Attendance Status. | Confirmation of attendance logged. |
| FR-08  | Attendance Tracking      | System stores attendance history for each employee. | - | Stored attendance records. |
| FR-09  | Payroll Management       | System calculates salary based on attendance and salary structure. | Employee Unique Identifier, Payroll Period, Attendance Records, Salary Structure. | Calculated Gross Salary. |
| FR-10  | Payroll Management       | System includes bonuses and deductions in salary calculations. | Bonuses, Deductions. | Salary with bonuses and deductions applied. |
| FR-11  | Payroll Management       | System processes and generates payroll periodically. | Payroll Period (e.g., monthly). | Generated payroll summaries/reports. |
| FR-12  | Salary Management        | System manages and stores predefined salary structures. | Salary Structure Name, Components (for Admin). | List of predefined salary structures. |
| FR-13  | Salary Management        | Admin can modify salary components (basic pay, bonuses, deductions). | Salary Structure Identifier, updated components. | Confirmation of salary component update. |
| FR-14  | Data Handling            | System stores all data using file handling techniques. | - | Data written to files. |
| FR-15  | Data Handling            | System retrieves and displays stored data on request. | Data retrieval request. | Retrieved and displayed data. |
| FR-16  | Data Handling            | System ensures data integrity during file operations. | - | Error messages on data integrity issues. |
| FR-17  | User Interface           | System provides a menu-driven, user-friendly interface. | - | Interactive menu. |
| FR-18  | User Interface           | Users can navigate to employee list, attendance, payroll options easily. | - | Navigable menu options. |
| FR-19  | Reporting & Viewing      | HR can view a list of all employees. | Request to view employee list. | Displayed list of employees. |
| FR-20  | Reporting & Viewing      | System displays individual employee attendance and payroll summaries. | Employee Unique Identifier, Request for attendance/payroll summary. | Displayed individual attendance history and payroll summary. |
| FR-21  | User Authentication      | System requires login for Admin and HR users. | Username, Password. | Authentication status, access granted/denied. |
| FR-22  | User Authorization       | System restricts access to features based on user role (Admin vs HR). | User role, requested feature. | Access granted/denied based on role. |
| FR-23  | Data Backup & Recovery   | System allows Admin to back up and restore data files. | Backup request, file selection. | Backup confirmation, restored data. |
| FR-24  | Audit Logging            | System logs critical actions (e.g., record creation, deletion, payroll processing). | Action performed, user, timestamp. | Log entry created. |
| FR-25  | Search & Filter          | System allows searching/filtering employees by name, role, or other criteria. | Search criteria, filter parameters. | Filtered employee list. |
| FR-26  | Error Handling           | System validates user input and displays meaningful error messages. | User input. | Validation result, error message if invalid. |
| FR-27  | Export/Print Reports     | System can export or print employee lists, attendance, or payroll summaries. | Export request, report type, format. | Exported/printed report. |
| FR-28  | Date/Time Management     | System records timestamps for attendance and payroll processing. | Action performed. | Timestamp recorded. |

## Non-Functional Requirements

| ID     | Category           | Description |
|--------|--------------------|-------------|
| NFR-01 | Performance        | The system should respond to user actions within 2 seconds for all menu operations. |
| NFR-02 | Performance        | File operations (read/write) should complete within 3 seconds for up to 1000 employee records. |
| NFR-03 | Reliability        | The system should not lose or corrupt data during normal operations or unexpected shutdowns. |
| NFR-04 | Availability       | The system should be available for use at least 99% of the time during business hours. |
| NFR-05 | Usability          | The user interface should be intuitive and require no more than 1 hour of training for a new user. |
| NFR-06 | Usability          | Error messages should be clear and guide the user to resolve issues. |
| NFR-07 | Security           | Only authorized users (Admin, HR) should access the system's features. |
| NFR-08 | Security           | User passwords (if implemented) should not be stored in plain text. |
| NFR-09 | Security           | Sensitive data should be protected from unauthorized access. |
| NFR-10 | Maintainability    | The code should be modular and well-commented to facilitate future updates. |
| NFR-11 | Maintainability    | System configuration (e.g., file paths, backup locations) should be easy to modify. |
| NFR-12 | Portability        | The system should run on any Linux-based environment with a standard C compiler. |
| NFR-13 | Scalability        | The system should support up to 1000 employee records without significant performance degradation. |
| NFR-14 | Backup & Recovery  | The system should provide mechanisms for regular data backup and easy recovery. |
| NFR-15 | Compliance         | The system should comply with relevant data protection and privacy regulations, if applicable. | 