#include "utils.h"
#include <stdio.h>
#include <string.h>

int getInt(const char *prompt) {
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    clearInputBuffer();
    return value;
}

float getFloat(const char *prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    clearInputBuffer();
    return value;
}

void getString(const char *prompt, char *buffer, int size) {
    printf("%s", prompt);
    fgets(buffer, size, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void printError(const char *message) {
    printf("[ERROR] %s", message);
}

void logAction(const char *action) {
    FILE *log = fopen("actions.log", "a");
    if (log) {
        fprintf(log, "%s\n", action);
        fclose(log);
    }
}

