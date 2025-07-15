# Software Requirements Specification (SRS)

## 1. Introduction

### 1.1 Purpose
This Software Requirements Specification (SRS) document describes the requirements for the Employee Management System. The system is designed to help organizations manage employee records, job roles, attendance, payroll, and related administrative tasks efficiently using a menu-driven interface and file-based data storage.

### 1.2 Scope
The Employee Management System provides functionalities for Admin and HR users to manage employee information, job roles, attendance, payroll, and reporting. The system ensures data integrity, security, and usability, and is intended for use on Linux-based environments with a standard C compiler.

### 1.3 Definitions, Acronyms, and Abbreviations
- **Admin:** User with full access to all system features, including employee and salary management.
- **HR:** User with access to attendance tracking and reporting features.
- **Payroll:** The process of calculating and distributing employee salaries.
- **SRS:** Software Requirements Specification.

### 1.4 References
- [FunctionalRequirements.md](./FunctionalRequirements.md)
- [NonFunctionalRequirements.md](./NonFunctionalRequirements.md)

---

## 2. Overall Description

### 2.1 Product Perspective
The Employee Management System is a standalone application developed in C, using file handling for persistent data storage. It features a menu-driven interface for ease of use.

### 2.2 Product Functions
- Employee record management (add, update, delete, view)
- Job role management
- Attendance tracking and history
- Payroll calculation and processing
- Salary structure management
- Data storage and retrieval
- User authentication and role-based access
- Reporting and viewing summaries
- Data backup and restore
- Audit logging
- Search and filter
- Export/print reports

### 2.3 User Classes and Characteristics
- **Admin:** Manages employee records, job roles, salary structures, and has access to all system features.
- **HR:** Manages attendance, views reports, and has limited access compared to Admin.

### 2.4 Operating Environment
- Linux-based operating system
- Standard C compiler (e.g., GCC)

### 2.5 Design and Implementation Constraints
- All data must be stored and managed using file handling techniques.
- The system must be menu-driven and user-friendly.

### 2.6 User Documentation
- User manual (to be provided)
- In-application help and error messages

---

## 3. Functional Requirements

All functional requirements are listed below, grouped by category:

### Employee Management
- **FR-01:** Admin can insert new employee records.
- **FR-02:** Admin can delete existing employee records.
- **FR-03:** Admin can update employee details (name, position, salary, etc.).
- **FR-04:** System assigns a unique identifier to each employee.

### Job Role Management
- **FR-05:** Admin can modify employee job roles or positions.
- **FR-06:** System maintains a list of valid job roles.

### Attendance Tracking
- **FR-07:** System allows HR to track and log daily attendance.
- **FR-08:** System stores attendance history for each employee.

### Payroll Management
- **FR-09:** System calculates salary based on attendance and salary structure.
- **FR-10:** System includes bonuses and deductions in salary calculations.
- **FR-11:** System processes and generates payroll periodically.

### Salary Management
- **FR-12:** System manages and stores predefined salary structures.
- **FR-13:** Admin can modify salary components (basic pay, bonuses, deductions).

### Data Handling
- **FR-14:** System stores all data using file handling techniques.
- **FR-15:** System retrieves and displays stored data on request.
- **FR-16:** System ensures data integrity during file operations.

### User Interface
- **FR-17:** System provides a menu-driven, user-friendly interface.
- **FR-18:** Users can navigate to employee list, attendance, payroll options easily.

### Reporting & Viewing
- **FR-19:** HR can view a list of all employees.
- **FR-20:** System displays individual employee attendance and payroll summaries.

### User Authentication & Authorization
- **FR-21:** System requires login for Admin and HR users.
- **FR-22:** System restricts access to features based on user role (Admin vs HR).

### Data Backup & Recovery
- **FR-23:** System allows Admin to back up and restore data files.

### Audit Logging
- **FR-24:** System logs critical actions (e.g., record creation, deletion, payroll processing).

### Search & Filter
- **FR-25:** System allows searching/filtering employees by name, role, or other criteria.

### Error Handling & Validation
- **FR-26:** System validates user input and displays meaningful error messages.

### Export/Print Reports
- **FR-27:** System can export or print employee lists, attendance, or payroll summaries.

### Date/Time Management
- **FR-28:** System records timestamps for attendance and payroll processing.

---

## 4. Non-Functional Requirements

All non-functional requirements are listed below, grouped by category:

### Performance
- **NFR-01:** The system should respond to user actions within 2 seconds for all menu operations.
- **NFR-02:** File operations (read/write) should complete within 3 seconds for up to 1000 employee records.

### Reliability & Availability
- **NFR-03:** The system should not lose or corrupt data during normal operations or unexpected shutdowns.
- **NFR-04:** The system should be available for use at least 99% of the time during business hours.

### Usability
- **NFR-05:** The user interface should be intuitive and require no more than 1 hour of training for a new user.
- **NFR-06:** Error messages should be clear and guide the user to resolve issues.
- **NFR-10:** The menu-driven interface should be intuitive, allowing new users to perform basic operations with minimal training.
- **NFR-11:** The user interface elements and interaction patterns shall be consistent across all modules.
- **NFR-12:** The system shall provide clear and timely feedback to the user for all actions.

### Security
- **NFR-07:** Only authorized users (Admin, HR) should access the system’s features.
- **NFR-08:** User passwords (if implemented) should not be stored in plain text.
- **NFR-09:** Sensitive data should be protected from unauthorized access.

### Maintainability
- **NFR-10:** The code should be modular and well-commented to facilitate future updates.
- **NFR-11:** System configuration (e.g., file paths, backup locations) should be easy to modify.

### Portability
- **NFR-12:** The system should run on any Linux-based environment with a standard C compiler.

### Scalability
- **NFR-13:** The system should support up to 1000 employee records without significant performance degradation.

### Backup & Recovery
- **NFR-14:** The system should provide mechanisms for regular data backup and easy recovery.

### Compliance
- **NFR-15:** The system should comply with relevant data protection and privacy regulations, if applicable.

---

## 5. Other Requirements

### 5.1 Backup & Recovery
- The system should provide mechanisms for regular data backup and easy recovery.

### 5.2 Compliance
- The system should comply with relevant data protection and privacy regulations, if applicable.

---

## 6. Appendices
- User manual and training materials (to be developed)
- Sample data files
- Glossary of terms 