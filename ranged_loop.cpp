#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Ranged FOR loop
    /*
        for(rangeDeclaration : rangeExpression){
            //code block
        }

        Ex: for(int n : numarray){
                cout << n;
            }
            'n' copies the value of numarray elements
            
            for(int &n : numarray){
                cout << n;
            }
            'n' takes values of numarray directly. It is more efficient!
            '&' is reference operator
    */

    // Ranged for loop using array
    int arr[] = {1,2,3,4,5};
    for(int i: arr){
        cout<< i <<" ";
    }
    cout<<endl;

    //Ranged for loop with shortcut
    for(int b: {7,6,3,5,7}){
        cout<< b <<" ";
    }
    cout<<endl;

    // Ranged for loop using vector
    vector<int> arrVec {5,4,3,2,1};
    for(int v: arrVec){
        cout<< v <<" ";
    }
    cout<<endl;
    
    //Ranged for loop with more efficiency
    int num[] = {0,9,8,7,6};
    for(int &a: num){
        cout<< a <<" ";
    }
    return 0;
}