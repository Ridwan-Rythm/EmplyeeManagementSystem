# Employee Management System – Non-Functional Requirements

## Performance
- **NFR-01:** The system should respond to user actions within 2 seconds for all menu operations.
- **NFR-02:** File operations (read/write) should complete within 3 seconds for up to 1000 employee records.

## Reliability & Availability
- **NFR-03:** The system should not lose or corrupt data during normal operations or unexpected shutdowns.
- **NFR-04:** The system should be available for use at least 99% of the time during business hours.

## Usability
- **NFR-05:** The user interface should be intuitive and require no more than 1 hour of training for a new user.
- **NFR-06:** Error messages should be clear and guide the user to resolve issues.

## Security
- **NFR-07:** Only authorized users (Admin, HR) should access the system’s features.
- **NFR-08:** User passwords (if implemented) should not be stored in plain text.
- **NFR-09:** Sensitive data should be protected from unauthorized access.

## Maintainability
- **NFR-10:** The code should be modular and well-commented to facilitate future updates.
- **NFR-11:** System configuration (e.g., file paths, backup locations) should be easy to modify.

## Portability
- **NFR-12:** The system should run on any Linux-based environment with a standard C compiler.

## Scalability
- **NFR-13:** The system should support up to 1000 employee records without significant performance degradation.

## Backup & Recovery
- **NFR-14:** The system should provide mechanisms for regular data backup and easy recovery.

## Compliance
- **NFR-15:** The system should comply with relevant data protection and privacy regulations, if applicable. 