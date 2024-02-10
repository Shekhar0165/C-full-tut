// In this we are going to start distuctor in C++ this is fun for us !
#include<iostream>
using namespace std;

int count;
class simple{
    public:
        simple(){
            count++;
            cout<<"the value of count is in contructor "<<count<<endl;
        }
        ~simple(){
            cout<<"the value of count is in distructor  "<<endl;
        }

};

int main(){
    // In Disductor we can not take any arg and value !
    simple si;
    {
        cout<<"Now we are in block"<<endl;
        simple n1 ,n2;
        cout<<"Exit"<<endl;

    }
    return 0;
}