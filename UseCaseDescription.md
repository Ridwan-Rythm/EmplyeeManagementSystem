# Use Case Descriptions (One Table Per Use Case)

## UC-01: Add New Employee
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-01                                                                 |
| Name          | Add New Employee                                                      |
| Actor(s)      | Admin                                                                 |
| Description   | Admin adds a new employee to the system.                              |
| Preconditions | Admin is logged in and has permissions.                               |
| Postconditions| New employee record is created and stored.                            |
| Main Flow     | Admin selects add, enters details, system validates, generates ID, stores record, confirms creation. |

## UC-02: Update Employee Details
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-02                                                                 |
| Name          | Update Employee Details                                               |
| Actor(s)      | Admin                                                                 |
| Description   | Admin modifies existing employee information.                         |
| Preconditions | Employee record exists.                                               |
| Postconditions| Employee information is updated.                                      |
| Main Flow     | Admin selects update, chooses employee, edits details, system validates and updates, confirms update. |

## UC-03: Delete Employee Record
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-03                                                                 |
| Name          | Delete Employee Record                                                |
| Actor(s)      | Admin                                                                 |
| Description   | Admin removes an employee record from the system.                     |
| Preconditions | Employee record exists.                                               |
| Postconditions| Employee record is deleted.                                           |
| Main Flow     | Admin selects delete, chooses employee, confirms, system deletes record, confirms deletion. |

## UC-04: Log Daily Attendance
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-04                                                                 |
| Name          | Log Daily Attendance                                                  |
| Actor(s)      | HR                                                                    |
| Description   | HR records daily attendance for employees.                            |
| Preconditions | Employee records exist.                                               |
| Postconditions| Attendance record is stored with timestamp.                           |
| Main Flow     | HR selects log, chooses employee, enters status, system records with date/time, confirms logging. |

## UC-05: View Employee List
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-05                                                                 |
| Name          | View Employee List                                                    |
| Actor(s)      | HR, Admin                                                             |
| Description   | User views a list of all employees.                                   |
| Preconditions | User is logged in.                                                    |
| Postconditions| Employee list is displayed.                                           |
| Main Flow     | User selects view, system retrieves and displays employee list. |

## UC-06: Calculate Payroll
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-06                                                                 |
| Name          | Calculate Payroll                                                     |
| Actor(s)      | Admin                                                                 |
| Description   | System calculates employee salary based on attendance and salary.      |
| Preconditions | Employee and attendance data exist.                                   |
| Postconditions| Payroll calculation is completed and stored.                          |
| Main Flow     | Admin selects calculate, enters period, system retrieves data, applies structure, calculates, stores, displays summary. |

## UC-07: Generate Payroll Report
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-07                                                                 |
| Name          | Generate Payroll Report                                               |
| Actor(s)      | Admin, HR                                                             |
| Description   | System generates and displays payroll reports.                        |
| Preconditions | Payroll calculations performed.                                       |
| Postconditions| Payroll report is displayed or exported.                              |
| Main Flow     | User selects report, chooses type/period, system retrieves data, generates and displays/exports report. |

## UC-08: Manage Job Roles
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-08                                                                 |
| Name          | Manage Job Roles                                                      |
| Actor(s)      | Admin                                                                 |
| Description   | Admin adds, modifies, or removes job roles.                           |
| Preconditions | Admin is logged in with permissions.                                  |
| Postconditions| Job role list is updated.                                             |
| Main Flow     | Admin selects manage, views roles, adds/edits/deletes, system validates and updates, confirms operation. |

## UC-09: Search Employees
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-09                                                                 |
| Name          | Search Employees                                                      |
| Actor(s)      | Admin, HR                                                             |
| Description   | User searches for employees using various criteria.                   |
| Preconditions | Employee records exist.                                               |
| Postconditions| Search results are displayed.                                         |
| Main Flow     | User selects search, enters criteria, system searches and displays results, user can view details. |

## UC-10: Backup Data
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-10                                                                 |
| Name          | Backup Data                                                           |
| Actor(s)      | Admin                                                                 |
| Description   | Admin creates a backup of all system data.                            |
| Preconditions | Admin is logged in with permissions.                                  |
| Postconditions| Backup file is created.                                               |
| Main Flow     | Admin selects backup, specifies location, system creates backup, confirms success. |

## UC-11: Restore Data
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-11                                                                 |
| Name          | Restore Data                                                          |
| Actor(s)      | Admin                                                                 |
| Description   | Admin restores system data from a backup file.                        |
| Preconditions | Backup file exists.                                                   |
| Postconditions| System data is restored from backup.                                  |
| Main Flow     | Admin selects restore, chooses file, system validates and restores, confirms restoration. |

## UC-12: User Login
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-12                                                                 |
| Name          | User Login                                                            |
| Actor(s)      | Admin, HR                                                             |
| Description   | User authenticates to access the system.                              |
| Preconditions | User has valid credentials.                                           |
| Postconditions| User is logged in with role permissions.                              |
| Main Flow     | System shows login, user enters credentials, system validates, grants access, shows menu. |

## UC-13: View Attendance History
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-13                                                                 |
| Name          | View Attendance History                                               |
| Actor(s)      | HR, Admin                                                             |
| Description   | User views attendance history for a specific employee.                |
| Preconditions | Employee and attendance data exist.                                   |
| Postconditions| Attendance history is displayed.                                      |
| Main Flow     | User selects view, chooses employee, system retrieves and displays attendance history. |

## UC-14: Export Reports
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-14                                                                 |
| Name          | Export Reports                                                        |
| Actor(s)      | Admin, HR                                                             |
| Description   | User exports reports to external files.                               |
| Preconditions | Report data exists.                                                   |
| Postconditions| Report is exported to specified format.                               |
| Main Flow     | User selects export, chooses type/format, system generates and saves report, confirms export. |

## UC-15: System Configuration
| Field         | Value                                                                 |
|-------------- |-----------------------------------------------------------------------|
| Use Case ID   | UC-15                                                                 |
| Name          | System Configuration                                                  |
| Actor(s)      | Admin                                                                 |
| Description   | Admin modifies system settings and configurations.                    |
| Preconditions | Admin is logged in with permissions.                                  |
| Postconditions| System configuration is updated.                                      |
| Main Flow     | Admin selects config, views/edits settings, system validates and updates, confirms change. | 