#include <iostream>
using namespace std;

class shekhar
{
    int a, b;

public:
    shekhar(void); // This is constuctor 
    void PrintNumber(void);
};

shekhar ::shekhar(void)
{
    a = 67;
    b = 78;
}
void shekhar::PrintNumber()
{
    cout << "the value of is a is " << a << " and the value of b is " << b << endl;
}

int main()
{
    shekhar c1;
    c1.PrintNumber();
    return 0;
}