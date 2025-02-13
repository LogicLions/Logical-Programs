#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a; // storing address of memory location of a. int* to store address of int datatype.

    cout<<"Value of a: "<<a;
    cout<<"\nMemory address - p: "<<p;
    cout<<"\nValue stored at p: "<<*p;

    *p = 20; // assigning new value in a using its pointer means using memory address.
    cout<<"\nNew Value stored at p: "<<*p;

    // Double pointer (pointer to pointer)
    int **q=&p; // storing address of pointer p inside pointer q;

    cout<<"\nMemory adress - q: "<<q; // it will print address stored at q pointer
    cout<<"\nDereferncing q once: "<<*q; // it will print address stored at p pointer
    cout<<"\nDereferencing q twice: "<<**q; // it will print value of a;

    return 0;
}