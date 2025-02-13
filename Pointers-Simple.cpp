#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* aPtr = &a; // storing address of memory location of a. int* to store address of int datatype.

    cout<<"Memory address - aPtr: "<<aPtr;
    cout<<"\nValue stored at aPtr: "<<*aPtr;

    *aPtr = 20; // assigning new value in a using its pointer means using memory address.
    cout<<"\nNew Value stored at aPtr: "<<*aPtr;

    return 0;
}