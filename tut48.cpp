#include <iostream>
using namespace std;

// In this, we are learning about Constructors in Derived Class in C++

// Base class 1
class Base1
{
protected:
    int base1;

public:
    // Constructor for Base1
    Base1(int a)
    {
        base1 = a;
        cout << "Base1 constructor called " << endl;
    }

    // Function to print data of Base1
    void printdatabase1()
    {
        cout << "Base1: " << base1 << endl;
    }
};

// Base class 2
class Base2
{
protected:
    int base2;

public:
    // Constructor for Base2
    Base2(int b)
    {
        base2 = b;
        cout << "Base2 constructor called " << base2 << endl;
    }

    // Function to print data of Base2
    void printdatabase2()
    {
        cout << "Base2: " << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Drived : public Base1, public Base2
{
private:
    int drived1, drived2;

public:
    // Constructor for Drived class, initializing Base1 and Base2 using member initializer list
    Drived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        drived1 = c;
        drived2 = d;
        cout << "Drived constructor called " << endl;
    }

    // Function to print data of Drived class
    void printdatadrived()
    {
        cout << "Drived 1: " << drived1 << endl;
        cout << "Drived 2: " << drived2 << endl;
    }
};

// Main function
int main()
{
    // Creating an object of Drived class
    Drived shekhar(2, 4, 6, 4);

    // Calling the printdatadrived function to display data of Drived class
    shekhar.printdatadrived();

    // Return 0 to indicate successful execution
    return 0;
}
