#ifndef UTILS_H
#define UTILS_H

// Function prototypes
int getInt(const char *prompt);
float getFloat(const char *prompt);
void getString(const char *prompt, char *buffer, int size);
void clearInputBuffer();
void printError(const char *message);
void logAction(const char *action);

#endif // UTILS_H

