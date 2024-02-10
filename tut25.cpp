#include<iostream>
using namespace std;
// In this we are going start Array in classes 
class fb{
    int id;
    public:
        void setdata(){
            cout<<"Enter your Id here"<<endl;
            cin>>id;
        }
        void getdata(){
            cout<<"Your ID is "<<id<<endl;
        }
};

int main(){
    fb shekhar[4];
    for (int i = 0; i < 4; i++)
    {
        shekhar[i].setdata();
        shekhar[i].getdata();
    }
    
    return 0;
}