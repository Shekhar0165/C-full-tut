#include <iostream>
using namespace std;

class base1
{
protected:
    int base1;

public:
    void setbase1(int a)
    {
        base1 = a;
    }
};

class base2
{
protected:
    int base2;

public:
    void setbase2(int p){
        base2 = p;
    }
};

class Drived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1 << endl;
        cout << "the value of base2 is " << base2 << endl;
        cout << "the sum of base1 and base2 are " << base1 + base2 << endl;
    }
};

int main()
{
    Drived shekhar;
    shekhar.setbase1(23);
    shekhar.setbase2(23);
    shekhar.show();
     return 0;
}