/*
    CONSTRUCTORS
    -> Special member functions
    -> Executed when new objects are created
    -> Name identical to class
    -> No return type, not even void
*/

/*
    Example:
*/

#include<iostream>
using namespace std;

class myClass{
    public:
        // myClass(){
        //     cout<<"Hey!";
        // }
        myClass(string s){
            setName(s);
        }
        void setName(string str){
            name = str;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main(){
    myClass myObj1("Name1 here");
    myClass myObj2("Name2 here");
    cout<<myObj1.getName()<<endl;
    return 0;
}