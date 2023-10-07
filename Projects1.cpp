#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Collect job application information
    string fullName, email, phoneNumber, desiredPosition, qualifications;

    cout << "Job Application Form" << endl;
    cout << "====================" << endl;
    
    cout << "Full Name: ";
    getline(cin, fullName);

    cout << "Email Address: ";
    getline(cin, email);

    cout << "Phone Number: ";
    getline(cin, phoneNumber);

    cout << "Desired Position: ";
    getline(cin, desiredPosition);

    cout << "Qualifications: ";
    getline(cin, qualifications);

    // Create a text file with the application details
    ofstream outFile("job_application.txt");
    if (outFile.is_open()) {
        outFile << "Job Application Details" << endl;
        outFile << "=======================" << endl;
        outFile << "Full Name: " << fullName << endl;
        outFile << "Email Address: " << email << endl;
        outFile << "Phone Number: " << phoneNumber << endl;
        outFile << "Desired Position: " << desiredPosition << endl;
        outFile << "Qualifications: " << qualifications << endl;
        outFile.close();
        cout << "Job application saved as job_application.txt." << endl;
    } else {
        cerr << "Error: Unable to open the file for writing." << endl;
    }

    return 0;
}

