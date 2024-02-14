#include<iostream>
using namespace std;

// In this I am learning About Array of Objects Using Pointers in C++
class ShopItem{
    int id;
    float price;
    public:
        void setdata(int a , float b){
            id = a;
            price = b;
        }
        void getdata(){
            cout<<"Id:"<<id<<endl;
            cout<<"Price:"<<price<<endl;
        }
};

int main(){
    int p ,i;
    float q;

    // Creating an array of ShopItem objects using dynamic memory allocation
    ShopItem *ptr = new ShopItem[3];

    // Creating a temporary pointer to iterate over the array
    ShopItem *ptrTemp = ptr;

    // Getting input for each ShopItem object in the array
    for (i = 0; i < 3; i++)
    {
        cout<<"Enter Id of "<<endl;
        cin>>p;
        cout<<"Enter price of "<<endl;
        cin>>q;

        // Setting data for the current ShopItem using the setdata method
        ptr->setdata(p, q);

        // Moving the pointer to the next ShopItem in the array
        *ptr++;
    }

    // Displaying data for each ShopItem in the array
    for (i = 0; i < 3; i++)
    {
        // Displaying data for the current ShopItem using the getdata method
        ptrTemp->getdata();

        // Moving the temporary pointer to the next ShopItem in the array
        ptrTemp++;
    }

    // Displaying addresses of the original and temporary pointers
    cout << "Original Pointer Address: " << ptr << endl; 
    cout << "Temporary Pointer Address: " <<ptrTemp;
    // ptr and ptrTemp Address are same
    
    return 0;
}
