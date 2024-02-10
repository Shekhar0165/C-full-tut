#include<iostream>
#include<cmath>
using namespace std;

// In this we are going create a program in which we find distance between 2 points in OOPs

class Point{
    int pt1,pt2,pt3,pt4;
    public:
        void TakePoint();
        double Distance_cal();
         
};

void Point::TakePoint(){
    cout<<"Enter x of First Point "<<endl;
    cin>>pt1;
    cout<<"Enter y of Second Point "<<endl;
    cin>>pt2;
    cout<<"Enter x of third Point "<<endl;
    cin>>pt3;
    cout<<"Enter y of Forth Point "<<endl;
    cin>>pt4;
}
double Point::Distance_cal(){
    return sqrt(pow(pt3 - pt1, 2) + pow(pt4 - pt2, 2));
}

int main(){
    Point c1;
    c1.TakePoint();
    double a = c1.Distance_cal();
    cout<<"the Between Two Point are "<<a<<endl;
    return 0;
}