#include<iostream>
using namespace std;
class complex{
    int a , b;
    public:
        friend complex SumComplex(complex o1 , complex o2);
        void SetNumber(int x , int y){
            a = x;
            b = y;
        };
        void PrintNumber(){
            cout<<"The Number is "<<a<<" + "<<b<<"i"<<endl;
        };
};

complex SumComplex(complex o1, complex o2){
    complex o3;
    o3.SetNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    complex c1,c2,c3,sum;
    c1.SetNumber(2,6);
    c1.PrintNumber();

    c2.SetNumber(8,4);
    c2.PrintNumber();

    c3.SetNumber(2,2);
    c3.PrintNumber();
    sum = SumComplex(c1,c2);
    sum.PrintNumber();
    return 0;
}