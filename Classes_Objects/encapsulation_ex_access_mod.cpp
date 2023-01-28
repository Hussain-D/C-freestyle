#include<iostream>
using namespace std;

class myClass{
    public:
        void setName(string str){
            name = str;
        }
        // void getName(){
        //     cout<<name<<endl;
        // }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main(){
    myClass myObj;
    myObj.setName("String in here");
    // myObj.getName();
    cout<<myObj.getName()<<endl;
    return 0;
}

/*
    We used encapsulation to hide the name attribute from the outside code.
    Then we provided access to it using public methods.
    Our class data can be read and modified only through those methods.

    This allows for changes to the implementation of the methods and
    attributes, without affecting the outside code.
*/