#include<iostream>
using namespace std;

// IN this we are going learn about how use constuctor with argguments is called paremeterized Constuctor


class complex{
    int a,b;
    public:
        complex(int , int);
        void PrintNumber(void);
};
complex ::complex(int x, int y)
{
    a = x;
    b = y;
}
void complex::PrintNumber()
{
    cout << "the value of is a is " << a << " and the value of b is " << b << endl;
}
int main(){
    complex a(4,50); // this is first to invoked constuctor in C++
    a.PrintNumber();

    complex b = complex(78,54); // this is second method of invoked constuctor in C++
    b.PrintNumber();
    
    return 0;
}