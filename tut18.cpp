#include <iostream>
using namespace std;

int factorail(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorail(n - 1);
};

int main()
{
    int a;
    cout<<"enter factorail number here"<<endl;
    cin>>a;
    cout<<"the value of factorail of "<<a<<" is "<<factorail(a)<<endl;
    return 0;
}