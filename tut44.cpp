#include <iostream>
using namespace std;

// In this example, we demonstrate the use of virtual base class in C++

// Base class representing a Student
class Student
{
protected:
    float roll_number;

public:
    // Set the roll number for the student
    void set_number(float n)
    {
        roll_number = n;
    }

    // Print the roll number of the student
    void PrintNumber()
    {
        cout << "The roll No. is " << roll_number << endl;
    }
};

// Derived class for representing test scores, inheriting virtually from Student
class test : virtual public Student
{
protected:
    float maths, physics;

public:
    // Set the test scores for Maths and Physics
    void Set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    // Print the test scores for Maths and Physics
    void Print_marks()
    {
        cout << "Marks are here :" << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

// Derived class for representing sport scores, inheriting virtually from Student
class Sport : virtual public Student
{
protected:
    float score;

public:
    // Set the sport score
    void Set_score(float sc)
    {
        score = sc;
    }

    // Print the sport score
    void Print_score()
    {
        cout << "Score in Sport: " << score << endl;
    }
};

// Derived class representing overall result, inheriting from both test and Sport
class result : public test, public Sport
{
private:
    float total;

public:
    // Display the overall result including total marks
    void display()
    {
        total = maths + physics + score;
        PrintNumber();
        Print_marks();
        Print_score();
        cout << "Total marks is :" << total << endl;
    }
};

// Main function
int main()
{
    // Create an instance of the result class
    result shekhar;

    // Set the roll number, test scores, and sport score for the student
    shekhar.set_number(2330203);
    shekhar.Set_marks(99.0, 99.0);
    shekhar.Set_score(7);

    // Display the overall result
    shekhar.display();

    return 0;
}
