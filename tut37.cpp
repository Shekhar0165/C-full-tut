#include<iostream>
using namespace std;

// In this we are going to start Inheritance 
class simple{
    public :
        int a,b = 45;
        simple(int p ){
            a = p;
        }
        simple(){}
        void display(){
            cout<<"this is value of a is "<<a<<" and this value of b is "<<b<<endl;
        }
};

// if i make this complex function without private then simple class not give access to complex while if i make public then it give access and deafult is private

class complex :public simple{
    public:
    complex(int p){

        a = p;
    }

        void display(){
            cout<<"The value of c is "<<a<<endl;
        }
};

int main(){
    simple s1(4);
    s1.display();
    complex s2(3);
    s2.display();
    cout<<s2.b<<endl;
    
    

    return 0;
}