#include <iostream>
using namespace std;

// Define the structure
struct Person
{
    string name; // Member variable for name
    int id;      // Member variable for ID
    int age;     // Member variable for age
};

// Function to input data for a person
// void inputPerson(Person &p)
// {
//     cout << "Enter Name: ";
//     cin.ignore();         // Clear the input buffer before taking a string
//     getline(cin, p.name); // Take the full name including spaces
//     cout << "Enter ID: ";
//     cin >> p.id;
//     cout << "Enter Age: ";
//     cin >> p.age;
// }

// Function to display data for a person
void displayPerson(const Person &p)
{
    cout << "\n--- Person Details ---\n";
    cout << "Name: " << p.name << endl;
    cout << "ID: " << p.id << endl;
    cout << "Age: " << p.age << endl;
}

int main()
{
    Person person; // Declare a structure variable

    cout << "Enter Name: ";
    // cin.ignore();         // Clear the input buffer before taking a string
    getline(cin, person.name); // Take the full name including spaces
    cout << "Enter ID: ";
    cin >> person.id;
    cout << "Enter Age: ";
    cin >> person.age;

    // Take input
    // inputPerson(person);

    // Display the data
    displayPerson(person);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// struct Person{
//     String name;
//     int id;
// };


// int main()
// {
//     person person;



    

//     return 0;
// }