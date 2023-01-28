#include<iostream>
using namespace std;

class Paint{
    public:
        Paint(string n){    //defining the constructor
            cout<<n<<endl;
        }
};

int main(){
    string inp_str;
    cin>>inp_str;
    Paint p1(inp_str);      //instantiation
    return 0;
}