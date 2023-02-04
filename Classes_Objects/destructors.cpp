/*
    DESTRUCTORS
    
    They are special funtions, just like constructors.
    They're called when an object is destroyed or deleted.
    Objects are destroyed when they go out of scope,
    or whenever the delete expression is applied to a pointer
    directed at an object of a class.

    Name is similar to constructor but prefixed with '~'(tilde).
    A destructor can't return a value or take any parameter.
*/

#include<iostream>
using namespace std;

class myclass{
    public:
        myclass(){
            cout<<"Constructor"<<endl;
        }
        ~myclass(){
            cout<<"Destructor"<<endl;
        }
};

int main(){
    myclass obj;
    return 0;
}