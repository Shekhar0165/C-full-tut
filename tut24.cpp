#include<iostream>
using namespace std;

class CSE
{
    static int count;
    int num;
    public:
        void getdata();
        void displaydata();
};

void CSE :: getdata(){
    cout<<"Enter Your Favrate Number Language "<<endl;
    cin>>num;
    count++;
}
void CSE :: displaydata(){
    cout<<"Your favrate number is "<<num<<" and you this is your "<<count<<" Favrate number"<<endl;
}
int CSE :: count = 10;

int main(){
    // In this we are going start static member function 
    CSE shekhar , nishant, shivam;
    shekhar.getdata();
    shekhar.displaydata();

    shivam.getdata();
    shivam.displaydata();

    nishant.getdata();
    nishant.displaydata();

    return 0;
}