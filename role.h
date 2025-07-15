#ifndef ROLE_H
#define ROLE_H

#define MAX_ROLE_NAME 30
#define MAX_ROLES 50

// Role structure
typedef struct {
    int id;
    char name[MAX_ROLE_NAME];
} Role;

// Function prototypes
void addRole();
void updateRole();
void deleteRole();
void listRoles();
Role* findRoleById(int id);

#endif // ROLE_H
