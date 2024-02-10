#include <iostream>
using namespace std;

typedef struct shekhar
{
    int Eid;
    char favchar;
    float income;
} sh;
union shekhar1
{
    int price;
    int rice;
    int doller;
};

int main()
{
    sh harry;
    union shekhar1 sh;
    sh.price = 45;
    sh.doller = 745;
    // cout<<"this value of price is "<<sh.price<<endl;
    // cout<<"this value of price is "<<sh.doller<<endl;
    harry.Eid = 2334;
    harry.favchar = 'g';
    harry.income = 2345.5;
    enum
    {
        tainsh,
        shivam,
        satyam
    };
    // cout<<"the value is "<<harry.Eid<<endl;
    // cout<<"the value is "<<harry.favchar<<endl;
    // cout<<"the value is "<<harry.income<<endl;

    cout<<tainsh<<endl;
    cout<<shivam<<endl;
    cout<<satyam<<endl;
    // cout<<shivam<<endl;
    // cout<<satyam<<endl;
    return 0;
}