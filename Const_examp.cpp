#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x){
        a = x;
        b = 0;
    }
    
    Complex(int, int); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
{
    a = x;
    b = y;
    // cout<<"Hello world";
}

class Point{
    int x, y;
    public:
        Point(int a, int b=44){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }

};


int main(){
    // Implicit call
    Complex a(40, 60);
    a.printNumber();

    Complex c = Complex();
    c.printNumber();

    Complex d = Complex(40);
    d.printNumber();

    // Explicit call
    Complex b = Complex(5, 7);
    b.printNumber();

    Point p(1, 1);
    p.displayPoint();

    Point q(4);
    q.displayPoint();
    return 0;

    return 0;
}