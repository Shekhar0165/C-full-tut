#include <iostream>
using namespace std;

// In This we are going study about Copy constuctor

class simple
{
    int a;

public:
    simple(){}
    simple(int x)
    {
        a = x;
    }
    // simple( simple &obj){
    //     a = obj.a;
    // }
    void display()
    {
        cout << "The Value of a is " << a << endl;
    }
};

int
main()
{
    simple c(8),d(c) ;
    c.display();
    d.display();

    return 0;
}