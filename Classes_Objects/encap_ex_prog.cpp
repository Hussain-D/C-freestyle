#include<iostream>
using namespace std;

/*
    EXAMPLE OF ENCAPSULATION
    You are a supercat engineer and currently setting the engine's horsepower.
    Write a program by using methods to set and get the horsepower of the car
    object in order to output it.
    The program should warn "Too much" if the inputted horserpower is above 800.

    Sample Input: 950
    Sample Output:
        Too much
        950
*/

class HP{   //class definition
    private:    
        int hp;
    public:
        void setHP(int num){    //setting set func
            hp = num;
            if(hp>800)
                cout<<"Too much"<<endl;
        }
        int getHP(){    //setting get func
            return hp;
        }
};

int main(){
    int horpow;
    cin>>horpow;
    HP myHP;    //instantiation - creating obj of class HP
    myHP.setHP(horpow);     //calling setHP - setting the value for private member
    cout<<myHP.getHP()<<endl;   //printing the value of private member
    return 0;
}