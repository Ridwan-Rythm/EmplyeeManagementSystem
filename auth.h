#ifndef AUTH_H
#define AUTH_H

#define MAX_USERNAME 30
#define MAX_PASSWORD 30

// User roles
typedef enum {
    ROLE_ADMIN,
    ROLE_HR
} UserRole;

// User structure
typedef struct {
    char username[MAX_USERNAME];
    char password[MAX_PASSWORD];
    UserRole role;
} User;

// Function prototypes
int login(User *loggedInUser);
void logout();
UserRole getUserRole(const char *username);

#endif // AUTH_H

