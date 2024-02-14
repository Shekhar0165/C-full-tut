#include<iostream>
using namespace std;
class complex{
    int var1, var2;
    public:
        void setdata(int a , int b){
            var1 = a;
            var2 = b;
        }
        void getdata(){
            cout<<"The value of var1 :"<<var1<<" and var2 :"<<var2<<endl;
        }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    // (*ptr).setdata(1,6);
    // (*ptr).getdata();

    complex *ptr = new complex;
    //  (*ptr).setdata(1,6);
    //  (*ptr).getdata();
    ptr->setdata(56,89);
    ptr->getdata();

    return 0;
}
