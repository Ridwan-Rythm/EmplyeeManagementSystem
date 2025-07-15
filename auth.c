#include "auth.h"
#include <stdio.h>
#include <string.h>

// Demo users (in a real system, load from file)
static User users[] = {
    {"admin", "admin123", ROLE_ADMIN},
    {"hr", "hr123", ROLE_HR}
};
static int userCount = 2;

int login(User *loggedInUser) {
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
    printf("Username: ");
    scanf("%29s", username);
    printf("Password: ");
    scanf("%29s", password);
    for (int i = 0; i < userCount; i++) {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
            strcpy(loggedInUser->username, users[i].username);
            strcpy(loggedInUser->password, users[i].password);
            loggedInUser->role = users[i].role;
            return 1;
        }
    }
    return 0;
}

void logout() {
    // Placeholder for logout logic
}

UserRole getUserRole(const char *username) {
    for (int i = 0; i < userCount; i++) {
        if (strcmp(username, users[i].username) == 0) {
            return users[i].role;
        }
    }
    return ROLE_ADMIN; // Default
}

