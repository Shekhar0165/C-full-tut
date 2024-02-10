// In this we are going start single inhiretance
#include <iostream>
using namespace std;
class Base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base ::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base :: getdata1()
{
    return data1;
}
int Base :: getdata2()
{
    return data2;
}

class Drived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Drived ::process()
{
    data3 = getdata1() * getdata2();
}
void Drived ::display()
{
    cout << "the value of data1 one is " << getdata1() << endl;
    cout << "the value of data2 one is " << getdata2() << endl;
    cout << "the value of data3 one is " << data3 << endl;
}

int main()
{
    Drived dir;
    dir.setdata();
    dir.process();
    dir.display();

    return 0;
}

// If in this we are use private in Drived then dir.setdata() not working because it is private we can not invoke this function in main function so the solution of this problem is use setdata() is process like this 
                                // void Drived ::process()
                                //     {
                                //         setdata(); // here we use it
                                //         data3 = getdata1() getdata2();
                                //     }                                             