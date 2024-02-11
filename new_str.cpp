// C++ program to demonstrate structure and dynamic memory allocation
// #include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Define a structure to store student information
struct Student {
    int id;
    string name;
    double gpa;
};

int main() {
    // Declare a pointer to Student structure
    Student* ptr;

    // Ask the user for the number of students
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Dynamically allocate memory for n Student structures
    ptr = new Student[n];

    // Input the details of each student from the user
    for (int i = 0; i < n; i++) {
        cout << "Enter the details of student " << i + 1 << endl;
        cout << "ID: ";
        cin >> ptr[i].id;
        cout << "Name: ";
        cin >> ptr[i].name;
        cout << "GPA: ";
        cin >> ptr[i].gpa;
    }
    cout<<endl;
    
  
    // Display the details of each student
    cout << "The details of the students are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "ID: " << ptr[i].id << endl;
        cout << "Name: " << ptr[i].name << endl;
        cout << "GPA: " << ptr[i].gpa << endl;
    }

    // Deallocate the dynamically allocated memory
    delete[] ptr;

    return 0;
}
