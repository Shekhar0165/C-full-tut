#include<iostream>
using namespace std;
class shekhar
{
private:
    int a , b ,c;
public:
    int e,f;
    void setData(int x , int y ,int z);
    void getData();
};
void shekhar :: setData(int x , int y ,int z){
    a = x;
    b = y;
    c = z;
}
void shekhar :: getData(){
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of e is "<<e<<endl;
    cout<<"the value of f is "<<f<<endl;
}
int main(){
    // in this code we learn about classes in c++
    shekhar khushi;
    khushi.e = 45;
    khushi.f = 59;
    khushi.setData(5,6,56);
    khushi.getData();
    return 0;
}