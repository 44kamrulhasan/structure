// #include <iostream>
// #include <unordered_map>
// using namespace std;

// // STORING USER INFO
// unordered_map<string, string> userDatabase;

// // 1. REGISTER FUNc
// bool registerUser()
// {
//     string username, password;
//     cout << "Enter a username: ";
//     cin >> username;

//     // CHECK USERNAME IS ALRADY TAKEN OR NOT
//     if (userDatabase.find(username) != userDatabase.end())
//     {
//         cout << "Username already exists. Please try a different one." << endl;
//         return false;
//     }

//     cout << "Enter a password: ";
//     cin >> password;

//     userDatabase[username] = password;
//     cout << "Registration successful!" << endl;
//     return true;
// }

// // 2. LOGIN FUNc
// bool loginUser()
// {
//     string username, password;
//     cout << "Enter your username: ";
//     cin >> username;
//     cout << "Enter your password: ";
//     cin >> password;

//     if (userDatabase.find(username) != userDatabase.end() && userDatabase[username] == password)
//     {
//         cout << "Login successful! Welcome, " << username << "!" << endl;
//         return true;
//     }
//     else
//     {
//         cout << "Invalid username or password. Please try again." << endl;
//     }
//     return false;
// }

// // GUEST FUNc
// void guestAccess()
// {
//     cout << "Welcome, Guest! You have limited access to the system." << endl;
// }

// int main()
// {
//     while (true)
//     {
//         int choice;
//         cout << "\nWelcome to the System!" << endl;
//         cout << "1. Register" << endl;
//         cout << "2. Login" << endl;
//         cout << "3. Continue as Guest" << endl;
//         cout << "4. Exit" << endl;
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             registerUser();
//             break;
//         case 2:
//             if (loginUser())
//                 ; 
//             break;
//         case 3:
//             guestAccess();
//             break; 
//         case 4:
//             cout << "Exiting the program. Goodbye!" << endl;
//             return 0;
//         default:
//             cout << "Invalid choice. Please select a valid option." << endl;
//         }
//     }
// }




// #include <stdio.h>

// int main() {
//     FILE *inputF, *outputF;
//     int character;

//     inputF = fopen("input.txt", "r");
//     if (inputF == NULL) {
//         printf("Error: Could not open input file\n");
//         return 1;
//     }

//     outputF = fopen("output.txt", "w+");
//     if (outputF == NULL) {
//         printf("Error: Could not open output file\n");
//         fclose(inputF);
//         return 1;
//     }

//     while ((character = fgetc(inputF)) != EOF) {
//         if (character >= 'a' && character <= 'z') {
//             character = character - ('a' - 'A');
//         }
//         fputc(character, outputF);
//     }

//     fclose(inputF);
//     fclose(outputF);

//     return 0;
// }



