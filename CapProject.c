#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MU 50
#define ML 40              

/*[MU = Max User] and [ML = Max Length]*/

// [USER INGO STORING]

typedef struct
{
    char username[ML];
    char password[ML];
} User;

User userDatabase[MU];
int userCount = 0;

bool registerUser()
{
    char username[ML], password[ML];
    printf("Enter a username: ");
    scanf("%s", username);

    for (int i = 0; i < userCount; i++)
    {
        if (strcmp(userDatabase[i].username, username) == 0)
        {
            printf("Username already exists. Please try a different one.\n");
            return false;
        }
    }

    printf("Enter a password: ");
    scanf("%s", password);

    // [STORING THE USER]
    strcpy(userDatabase[userCount].username, username);
    strcpy(userDatabase[userCount].password, password);
    userCount++;

    printf("Registration successful!\n");
    return true;
}

bool loginUser()
{
    char username[ML], password[ML];
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++)
    {
        if (strcmp(userDatabase[i].username, username) == 0 &&
            strcmp(userDatabase[i].password, password) == 0)
        {
            printf("Login successful. Welcome to RMS..., %s!\n", username);
            return true;
        }
    }

    printf("Invalid username or password..\n");
    return false;
}

void guestAccess()
{
    printf("Welcome, Guest! You have limited access to the _RM_ system.\n");
}

int main()
{
    while (true)
    {
        int choice;
        printf("\n.....Welcome to Rental Management System [RMS].....");
        printf("\n               _-_-_-_-_-_-_-_-_-_\n\n");

        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Continue as Guest\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice Please: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            if (loginUser())
                ;
            break;
        case 3:
            guestAccess();
            return 0;
        case 4:
            printf("Exiting the program.\n");
            return 0;
        default:
            printf("Invalid choice. Please select a valid option(1-3).\n");
        }
    }
}
