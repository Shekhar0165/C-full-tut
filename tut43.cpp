#include <iostream>
using namespace std;

// In This I am learing about Ambiguity Resolution in Inheritance in C++

// let I create first class called Base1
class Base1
{
public:
    void say()
    {
        cout << "Hello world, I am base 1" << endl;
    }
};
// let I create second class called Base2 in which say() name same but cout is diffenet
class Base2
{
    public:
    void say()
    {
        cout << "Hello world, I am base 2" << endl;
    }
};

// Now i create a class which inherited form class Base1 and class Base2 public
class Drived : public Base1,public Base2{
    int rendom ;
    public:
    // if i am not makeing say() function here then it give error called request for member 'say' is ambiguous
    void say(){
        // Base1:: say(); // if i use Base1::say() the it invoke say() function form Base1
        Base2:: say(); // if i use Base2::say() the it invoke say() function form Base2
    }
};



int main()
{
    Base1 base1;
    base1.say();  // Now it onvoke class Base1 with it say()
    Base2 base2;
    base2.say();  // Now it onvoke class Base2 with it say()

    Drived dir;
    dir.say(); // now i invoke say() function form Drived class 

    return 0;
}
