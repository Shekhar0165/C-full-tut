#include<iostream>
using namespace std;

int main(){
    int mark[]={23,54,656,234};
    for (int i = 0; i < 4; i++)
    {
    cout<<"this is mark of "<<mark[i]<<endl; 
        
    }
    cout<<"this is using pointer"<<endl;
    int *p = mark;
    for (int i = 0; i < 4; i++)
    cout<<"the value mark is "<<*(p+i)<<endl;
    {
        
    }
    
    
    return 0; 
}