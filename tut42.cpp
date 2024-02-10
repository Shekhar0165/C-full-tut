#include <iostream>
#include <string>
#include<cmath>
using namespace std;

// In this we going start a exercise in which we are using concept which we are already study

// this class for simple calculate
class simple_cal
{
protected:
    double num1;
    double num2;
    string opt;

public:
    void getnum();
    void calculate();
};

// thsi function take number 1 and number 2 and operator

void simple_cal::getnum()
{
    cout << "Enter first Number here " << endl;
    cin >> num1;
    cout << "Enter first Number here " << endl;
    cin >> num2;
    cout << "Enter operator here " << endl;
    cin >> opt;
}

// this function do opreation between number 1 and number 2 and also show result by this function
void simple_cal::calculate()
{
    if (opt == "+")
    {
        cout << "the sum of  " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
    }
    else if (opt == "-")
    {
        cout << "the subract of  " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
    }
    else if (opt == "/")
    {
        cout << "the division of  " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
    }
    else if (opt == "-")
    {
        cout << "the product of  " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    }
    else
    {
        cout << "you enter wrong operator" << endl;
    }
}

// Now i am going create a class which take sciencetific calculator
class sciencetific : public simple_cal
{
    public:
        void scinece_cal(); // this function is calculate operation

};
void sciencetific :: scinece_cal(){
    if (opt == "sin")
    {
        cout << "the value sin(" <<num1<< ") is " <<  sin(num1) <<"and the value sin(" <<num2<< ") is "<<sin(num2) << endl;
    }
    else if (opt == "cos")
    {
        cout << "the value cos(" <<num1<< ") is " <<  cos(num1) <<"and the value cos(" <<num2<< ") is "<<cos(num2) << endl;
    }
    else if (opt == "tan")
    {
     cout << "the value tan(" <<num1<< ") is " <<  tan(num1) <<"and the value tan(" <<num2<< ") is "<<tan(num2) << endl;
    }
    else if (opt == "log")
    {
     cout << "the value log(" <<num1<< ") is " <<  log10(num1) <<"and the value log(" <<num2<< ") is "<<log10(num2) << endl;
    }
    else
    {
        cout << "you enter wrong operator" << endl;
    }
}

int main()
{
    simple_cal cal;
    // cal.getnum();
    // cal.calculate();
    sciencetific scin;
    scin.getnum();
    scin.scinece_cal();
    return 0;
}