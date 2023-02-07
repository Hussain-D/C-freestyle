#include<iostream>
using namespace std;

class Phone{
    public:
        int charge;
        Phone(){
            charge = 100;
        }
        void use(){
            charge -= 10;
        }
        void getCharge(){
            cout<<charge;
        }
};

int main(){
    Phone p;
    p.use();
    Phone *ptr = &p;
    ptr -> getCharge(); //calling the getCharge() method on ptr
    return 0;
}