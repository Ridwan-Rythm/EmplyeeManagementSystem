# 🧑‍💼 Employee Management System (C Language, CLI-based)

A simple, file-based **Employee Management System** built using the C programming language.  
This project is designed for managing employee records, payroll, and attendance from a command-line interface — ideal for learning file handling, structs, and basic C programming concepts.

---

## 📋 Features

- Add new employee records
- View all employee data
- Update employee information
- Delete employee records
- Mark attendance
- Calculate monthly salary (based on attendance, bonuses, and deductions)
- Data is stored persistently using file handling

---

## 💻 Technologies Used

- Language: **C**
- File handling: `fopen`, `fread`, `fwrite`, `fprintf`, `fscanf`
- Standard Input/Output: `printf`, `scanf`
- Compilation: `gcc`

---

## 📁 File Structure

```
employee-management-system/
├── employee_management.c   // All logic in a single C file
├── employees.dat           // Binary data file storing employee records
└── README.md               // You're here!
```

---

## 🔧 How to Compile & Run

### Linux / MacOS / WSL:
```bash
gcc employee_management.c -o ems
./ems
```

### Windows (MinGW or similar):
```bash
gcc employee_management.c -o ems.exe
ems.exe
```

---

## 🗂️ Employee Struct

```c
typedef struct {
    int id;
    char name[50];
    char position[30];
    float salary;
    int attendanceDays;
    float bonus;
    float deduction;
} EMPLOYEE;
```

---

## 📌 Example Use Cases

- HR managing employee data for payroll processing
- Students learning C file handling & struct usage
- Mini project for software engineering/DSA coursework

---

## 🛡️ Disclaimer

This is a basic educational project — it does **not** include advanced features like authentication, concurrency control, or data encryption.

---

## 📄 License

MIT License. Feel free to use and modify for personal or academic purposes.