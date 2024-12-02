#include <string.h>

#define PASSWORD "securepassword"

int authenticate() {
    char input[20];
    printf("Enter password: ");
    scanf("%19s", input);  

    if (strcmp(input, PASSWORD) == 0) {
        printf("Access granted.\n");
        return 1;
    } else {
        printf("Access denied.\n");
        return 0;
    }
}

int main() {
    if (!authenticate()) {
        return 0;  
    }

    printf("Welcome to the Rent Management System.\n");
    return 0;
}