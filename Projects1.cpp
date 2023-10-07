#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string email;

    // Ask the user for their name
    cout << "Please enter your name: ";
    getline(cin, name);

    // Ask the user for their age
    cout << "Please enter your age: ";
    cin >> age;
    cin.ignore(); // Ignore the newline character left in the input buffer

    // Ask the user for their email address
    cout << "Please enter your email address: ";
    getline(cin, email);

    // Display the registration information
    cout << "\nThank you for registering!\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;

    return 0;
}
