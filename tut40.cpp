#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void setroll(int p){
            roll_number = p;
        }

};

class Exam :public Student{
    protected:
        float maths;
        float physics;
    public:
        setmarks(float p , float q){
            maths =p;
            physics = q;
        }    
};

class Result :public Exam{
   int percentage;
    public:
        void display();
        // void setpaerct();
};
// void Result :: setpaerct(){
//     percentage = ;
// }
void Result :: display(){
    cout<<"this is marks of maths are "<<maths<<" and this marks of physics are "<<physics<<endl;
    cout<<"the percntage is "<<(maths+physics)/2<<"%"<<endl;
    cout<<"For this roll no."<<roll_number<<endl;
}

int main(){
    Result shekhar;
    shekhar.setroll(203);
    // shekhar.setpaerct();
    shekhar.setmarks(99,97);
    shekhar.display();
    return 0;
}