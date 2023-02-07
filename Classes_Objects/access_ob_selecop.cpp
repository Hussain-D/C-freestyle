/*
    Using POINTERS to access object members

    When working with an object, use the dot member selection operator(.).
    When working with a pointer to the object, use the arrow member selection op(->)
    
*/

#include<iostream>
using namespace std;

class myclass{
    public:
        myclass();
        void outprint();
};

myclass::myclass(){}
void myclass::outprint(){
    cout<<"Hello World!"<<endl;
}

int main(){
    myclass obj;
    myclass *ptr = &obj;
    ptr -> outprint();
    return 0;
}