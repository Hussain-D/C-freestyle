/*
    CLASS
    keyword 'class'
    followed by '{}'
    end with ';'
*/
/*
    Access Specifiers: public, private and protected
*/

#include<iostream>
using namespace std;

// class BankAcc{
//     public: //Access Specifier
//         void Hello(){   //Defining a method or function
//             cout<<"Hello there!"<<endl;
//         }
// };

// int main(){
//     //Instantiaion - process of creating an object
//     BankAcc example;

//     //Calling the function using '.(dot)' separator
//     example.Hello();

//     return 0;
// }

/*
    Example - Chirping of birds
*/

class Bird{
    public:
        void makeSound(){
            cout<<"chirp-chirp"<<endl;
        }
};

int main(){
    Bird sparow;    //Instantiation
    sparow.makeSound();  //Calling a method of the class
    return 0;
}