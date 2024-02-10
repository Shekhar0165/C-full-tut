#include <iostream>
using namespace std;

// In this we are going to learn about Protected Access Modifier in C++ so let's start
class Base
{
    int b;

protected:
    int a;

public:
    void setdata();
};
void setdata()
{
    a = 4;
}
class Drived : protected Base
{
public:
    void showdata();
};
void Drived ::showdata()
{
    void setdata();
    cout << b;
}

int main()
{
    Drived dir;
    dir.showdata();
    return 0;
}