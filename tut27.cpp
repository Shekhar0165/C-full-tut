#include <iostream>
using namespace std;
class complex;
class Calculator
{
public:
    int sum(int x, int y)
    {
        return (x + y);
    };
    int SumRealPart(complex, complex);
    int SumImgPart(complex, complex);
};

class complex
{
    int a, b;

public:
    friend int Calculator::SumRealPart(complex, complex);
    friend int Calculator::SumImgPart(complex, complex);
    void SetNumber(int x, int y)
    {
        a = x;
        b = y;
    };
    void PrintNumber()
    {
        cout << "The Number is " << a << " + " << b << "i" << endl;
    };
};

int Calculator::SumRealPart(complex x, complex y)
{
    return (x.a + y.a);
    
};
int Calculator::SumImgPart(complex x, complex y)
{
    return (x.b + y.b);
    
};

int main()
{
    complex c1, c2;
    Calculator cal;
    c1.SetNumber(1, 4);
    c1.PrintNumber();

    c2.SetNumber(1, 4);
    c2.PrintNumber();
    int res = cal.SumRealPart(c1, c2);
    int resImg = cal.SumImgPart(c1, c2);
    cout<<"The Sum Of real part of this complex is : "<<res<<endl;
    cout<<"The Sum Of Imaginary part of this complex is : "<<resImg<<endl;

    return 0;
}
