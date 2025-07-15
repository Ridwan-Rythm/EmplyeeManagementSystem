#include "role.h"
#include <stdio.h>
#include <string.h>

#define ROLE_FILE "Roles.dat"

// Helper: Get next unique role ID
static int getNextRoleId() {
    FILE *file = fopen(ROLE_FILE, "rb");
    if (!file) return 1;
    Role role;
    int maxId = 0;
    // Find the highest existing role ID
    while (fread(&role, sizeof(Role), 1, file)) {
        if (role.id > maxId) maxId = role.id;
    }
    fclose(file);
    return maxId + 1;
}

// Add a new job role and save to file
void addRole() {
    Role role;
    role.id = getNextRoleId();
    printf("Enter role name: ");
    scanf("%29s", role.name);
    FILE *file = fopen(ROLE_FILE, "ab");
    if (!file) { printf("Error opening file!\n"); return; }
    fwrite(&role, sizeof(Role), 1, file);
    fclose(file);
    printf("Role added with ID %d.\n", role.id);
}

// Update an existing job role
void updateRole() {
    int id;
    printf("Enter role ID to update: ");
    scanf("%d", &id);
    FILE *file = fopen(ROLE_FILE, "rb+");
    if (!file) { printf("Error opening file!\n"); return; }
    Role role;
    int found = 0;
    long pos;
    // Search for the role by ID
    while ((pos = ftell(file)), fread(&role, sizeof(Role), 1, file)) {
        if (role.id == id) {
            found = 1;
            printf("Enter new role name: ");
            scanf("%29s", role.name);
            fseek(file, pos, SEEK_SET);
            fwrite(&role, sizeof(Role), 1, file);
            printf("Role updated.\n");
            break;
        }
    }
    if (!found) printf("Role not found.\n");
    fclose(file);
}

// Delete a job role by ID
void deleteRole() {
    int id;
    printf("Enter role ID to delete: ");
    scanf("%d", &id);
    FILE *file = fopen(ROLE_FILE, "rb");
    if (!file) { printf("Error opening file!\n"); return; }
    FILE *temp = fopen("temp_role.dat", "wb");
    Role role;
    int found = 0;
    // Copy all roles except the one to delete
    while (fread(&role, sizeof(Role), 1, file)) {
        if (role.id == id) {
            found = 1;
            continue;
        }
        fwrite(&role, sizeof(Role), 1, temp);
    }
    fclose(file); fclose(temp);
    remove(ROLE_FILE);
    rename("temp_role.dat", ROLE_FILE);
    if (found) printf("Role deleted.\n");
    else printf("Role not found.\n");
}

// List all job roles
void listRoles() {
    FILE *file = fopen(ROLE_FILE, "rb");
    if (!file) { printf("No roles found.\n"); return; }
    Role role;
    printf("\n%-5s %-30s\n", "ID", "Role Name");
    printf("-------------------------------\n");
    while (fread(&role, sizeof(Role), 1, file)) {
        printf("%-5d %-30s\n", role.id, role.name);
    }
    fclose(file);
}

// Find a job role by ID (returns pointer to static struct)
Role* findRoleById(int id) {
    static Role role;
    FILE *file = fopen(ROLE_FILE, "rb");
    if (!file) return NULL;
    while (fread(&role, sizeof(Role), 1, file)) {
        if (role.id == id) {
            fclose(file);
            return &role;
        }
    }
    fclose(file);
    return NULL;
}
