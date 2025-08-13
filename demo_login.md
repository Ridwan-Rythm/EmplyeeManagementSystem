# 🔐 Login System Demonstration Guide

## 🚀 **How to Test the New Login System**

### **1. Compile and Run**
```bash
gcc EMS_Final.c -o ems
./ems
```

### **2. Default Login Credentials**

#### **HR User (Full Access)**
- **Username**: `hr`
- **Password**: `hr123`
- **Access Level**: Full system access

#### **Admin User (Limited Access)**
- **Username**: `admin`
- **Password**: `admin123`
- **Access Level**: View + Update access only

### **3. Testing Different Roles**

#### **Test as HR User:**
1. Login with `hr` / `hr123`
2. You should see: "Welcome, hr (HR)!"
3. Try all menu options - you should have access to everything

#### **Test as Admin User:**
1. Login with `admin` / `admin123`
2. You should see: "Welcome, admin (ADMIN)!"
3. Try restricted functions:
   - ❌ Add Employee (should show "Access denied!")
   - ❌ Delete Employee (should show "Access denied!")
   - ❌ Mark Attendance (should show "Access denied!")
   - ❌ Calculate Payroll (should show "Access denied!")
   - ✅ View Employees (should work)
   - ✅ Update Employee (should work)
   - ✅ View Attendance (should work)

### **4. Security Features to Test**

#### **Password Change:**
1. Login with any account
2. Select option 9: "Change Password"
3. Enter current password
4. Enter new password (minimum 6 characters)
5. Confirm new password
6. Try logging out and back in with new password

#### **Logout Function:**
1. Login with any account
2. Select option 10: "Logout"
3. You should be returned to login screen
4. Try accessing menu without logging in (should not work)

#### **Session Management:**
1. Login with any account
2. Navigate through different menus
3. Your role and username should be displayed at the top
4. Access control should be enforced throughout

### **5. Error Handling to Test**

#### **Invalid Login:**
1. Try wrong username/password
2. System should allow 3 attempts
3. After 3 failures, system should exit

#### **Access Denied:**
1. Login as admin
2. Try to add an employee
3. Should see "Access denied! Only HR can add employees."

### **6. File Persistence**
1. Add some employees and attendance records
2. Use option 8 to save data
3. Check that `employees.txt`, `attendance.txt`, and `users.txt` are created
4. Restart the program
5. Login again - your data should persist

## 🔒 **Access Control Matrix**

| Function | HR | Admin |
|----------|----|-------|
| **1. Add Employee** | ✅ | ❌ |
| **2. View Employees** | ✅ | ✅ |
| **3. Update Employee** | ✅ | ✅ |
| **4. Delete Employee** | ✅ | ❌ |
| **5. Mark Attendance** | ✅ | ❌ |
| **6. View Attendance** | ✅ | ✅ |
| **7. Calculate Payroll** | ✅ | ❌ |
| **8. Save Data** | ✅ | ✅ |
| **9. Change Password** | ✅ | ✅ |
| **10. Logout** | ✅ | ✅ |
| **11. Save & Exit** | ✅ | ✅ |

## 🎯 **Expected Behavior**

### **HR Role:**
- Full access to all functions
- Can manage employees completely
- Can process payroll
- Can mark attendance

### **Admin Role:**
- View access to all data
- Can update employee information
- Cannot perform sensitive operations
- Cannot delete or add employees

## 🚨 **Troubleshooting**

### **If Login Fails:**
- Check username/password spelling
- Ensure caps lock is off
- Try default credentials exactly as shown

### **If Access Denied:**
- Check your current role (displayed at top of menu)
- HR has full access, Admin has limited access
- Some functions require specific roles

### **If Program Crashes:**
- Check for syntax errors in compilation
- Ensure all required files are present
- Try recompiling the source code

## 🎉 **Success Indicators**

✅ **Login System Working:**
- Login screen appears
- Credentials are accepted
- Welcome message shows
- Role is displayed correctly

✅ **Access Control Working:**
- HR can access all functions
- Admin gets access denied for restricted functions
- Role information persists throughout session

✅ **Security Features Working:**
- Password change works
- Logout returns to login screen
- Session management works
- File persistence works

---

**Enjoy testing your new secure Employee Management System! 🎊**
