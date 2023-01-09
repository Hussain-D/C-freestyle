/*
    C++ memory
    In a C++ program, memory is divided into two parts:
    Stack: all of the local variables take up memory from the stack
    Heap: unused program memory that can be used when the program runs
        to dynamically allocate the memory.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    // new int;    //allocates the memory size of integer on heap

    int *p = new int;
    *p = 5;
    cout<<p<<endl;
    cout<<*p<<endl;

    delete p;   //free up the allocated memory
    //now the pointer is stored on the stack.
    //pointers as such are pointing to non-existing memory locations
    //these are called as dangling pointers.

    p = new int;    //reuse for a new address

    return 0;
}