#include <iostream>
using namespace std;


/*
     // Derived Class syntax
    class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
    {
        class members/methods/etc...
    }
*/

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
        salary = 34.0;
    }
    void getData(){
        cout<<id<<endl;
        cout<<salary<<endl;
    }
};


int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    // cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}
