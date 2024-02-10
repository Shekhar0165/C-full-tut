#include <iostream>
using namespace std;
int f1(int fact)
{
    return fact*f1(fact-1);
}

int main()
{
    int a = f1(4);
    cout<<a;
    return 0;
}
