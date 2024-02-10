#include<iostream>
using namespace std;

class table{
    int num;
    public:
        void takenumber(){
            cout<<"Enter table number"<<endl;
            cin>>num;
        }
        void procces(){
            for (int i = 0; i < 11; i++)
            {
                cout << num << " X " << i << " = " << num * i << endl;

            }
            
        }

};

int main(int argc, char const *argv[])
{
    table shekahr;
    shekahr.takenumber();
    shekahr.procces();
    return 0;
}
