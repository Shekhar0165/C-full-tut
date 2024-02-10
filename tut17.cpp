#include<iostream>
using namespace std;

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

};

int main(){
    int a = 4;
    int b = 5; 
    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    // int temp  = a;
    // a = b;    this is mothod is work 
    // b = temp;
    swap(&a,&b); // this is also work which best method in this univers

    cout<<"the value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}