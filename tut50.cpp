#include<iostream>
using namespace std;

// In this i am learning about Pointers: new and delete Keywords in CPP

int main(){
    // Declare an integer variable 'shekhar' and initialize it with 56
    int shekhar = 56;
    
    // Declare a pointer 'add_Of_shekhar' and point it to the address of 'shekhar'
    int *add_Of_shekhar = &shekhar;
    
    // Print the value of 'shekhar'
    cout<<"the value of shekhar is "<<*add_Of_shekhar<<endl; // this is value of shekhar
    
    // Print the address of 'shekhar'
    cout<<"the address of shekhar is "<<add_Of_shekhar<<endl; // this gives the address of shekhar

    // New Keyword in CPP
    // Declare a pointer 'p' and allocate dynamic memory for an integer with value 102
    int *p = new int(102);
    
    // Print the value at the address pointed by 'p'
    cout<<"the value at Address p is "<<*p<<endl; // it gives the value at address p
    
    // Print the address stored in 'p'
    cout<<"the Address of p is "<<p<<endl; // it gives the address of p
    
    // Declare a dynamic array 'arr' of size 3
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    // Print the values of elements in 'arr'
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    
    // Alternatively, you can access elements using pointer arithmetic
    cout<<"we can use from this method also"<<endl;
    cout<<"the value of arr[0] is "<<*(arr)<<endl;
    cout<<"the value of arr[0] is "<<*(arr+1)<<endl;
    cout<<"the value of arr[0] is "<<*(arr+2)<<endl;
     
    // Delete Keyword in CPP
    // Deallocate the memory occupied by the dynamic array 'arr'
    delete[] arr;  
    
    cout<<"After delete keyword"<<endl;
    
    // Attempting to access values after deleting may lead to undefined behavior
    // So, it's better not to access 'arr' after deletion
    // cout<<"the value of arr[0] is "<<*(arr)<<endl;
    // cout<<"the value of arr[0] is "<<*(arr+1)<<endl;
    // cout<<"the value of arr[0] is "<<*(arr+2)<<endl;
    
    return 0;
}
