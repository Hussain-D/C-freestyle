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
    obj.outprint();
    return 0;
}