# 🧑‍💼 Employee Management System (C Language, CLI-based)

A simple, file-based **Employee Management System** built using the C programming language.  
This project is designed for managing employee records, payroll, and attendance from a command-line interface — ideal for learning file handling, structs, and basic C programming concepts.

**NEW: Added secure login system with role-based access control!**

---

## 🔐 **NEW LOGIN SYSTEM FEATURES**

### **User Roles & Access Control**
- **HR Role**: Full access to all functions (add, delete, update employees, mark attendance, calculate payroll)
- **Admin Role**: View access + ability to update employee details (restricted from sensitive operations)
- **Secure Authentication**: Password-protected login with maximum 3 attempts

### **Default Login Credentials**
```
HR User:
- Username: hr
- Password: hr123

Admin User:
- Username: admin
- Password: admin123
```

### **Security Features**
- Password change functionality
- Session management
- Role-based permission system
- Secure logout

---

## 📋 Features

- **🔐 Secure Login System** (NEW!)
- Add new employee records
- View all employee data
- Update employee information
- Delete employee records
- Mark attendance
- Calculate monthly salary (based on attendance, bonuses, and deductions)
- Data is stored persistently using file handling
- **Role-based access control** (NEW!)

---

## 💻 Technologies Used

- Language: **C**
- File handling: `fopen`, `fread`, `fwrite`, `fprintf`, `fscanf`
- Standard Input/Output: `printf`, `scanf`
- Compilation: `gcc`
- **Authentication & Security** (NEW!)

---

## 📁 File Structure

```
employee-management-system/
├── EMS_Final.c           // Main C source code with authentication
├── employees.txt         // Employee data file
├── attendance.txt        // Attendance records file
├── users.txt            // User accounts file (NEW!)
└── README.md            // You're here!
```

---

## 🔧 How to Compile & Run

### Linux / MacOS / WSL:
```bash
gcc EMS_Final.c -o ems
./ems
```

### Windows (MinGW or similar):
```bash
gcc EMS_Final.c -o ems.exe
ems.exe
```

---

## 🗂️ Data Structures

### Employee Struct
```c
typedef struct {
    int emp_id;
    char name[50];
    char position[30];
    float hourly_salary;
    int is_active;
} Employee;
```

### User Authentication Struct (NEW!)
```c
typedef struct {
    char username[50];
    char password[20];
    char role[50];        // "HR" or "ADMIN"
    int is_active;
} User;
```

---

## 🔒 **Access Control Matrix**

| Function | HR | Admin |
|----------|----|-------|
| Login | ✅ | ✅ |
| Change Password | ✅ | ✅ |
| Add Employee | ✅ | ❌ |
| View Employees | ✅ | ✅ |
| Update Employee | ✅ | ✅ |
| Delete Employee | ✅ | ❌ |
| Mark Attendance | ✅ | ❌ |
| View Attendance | ✅ | ✅ |
| Calculate Payroll | ✅ | ❌ |
| Save Data | ✅ | ✅ |

---

## 📌 Example Use Cases

- HR managing employee data for payroll processing
- Students learning C file handling & struct usage
- Mini project for software engineering/DSA coursework
- **Secure multi-user environment** (NEW!)

---

## 🚀 **Getting Started with Login**

1. **Compile the program** using gcc
2. **Run the executable**
3. **Login with default credentials**:
   - HR: `hr` / `hr123`
   - Admin: `admin` / `admin123`
4. **Navigate the menu** based on your role permissions
5. **Change passwords** for security after first login

---

## 🔧 **Troubleshooting**

If you encounter compilation issues:
- Ensure gcc is properly installed
- Check for syntax errors in the source code
- Verify all required header files are available
- Try using alternative compilers (clang, tcc)

---

**Note**: This system now provides enterprise-level security with role-based access control, making it suitable for both learning and practical use in small organizations.
