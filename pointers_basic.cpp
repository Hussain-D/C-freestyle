/*
        POINTER BASICS
*/

#include<iostream>
using namespace std;

// int main(){

//     int* pointerVar, var; //here, pointer is only "pointerVar" not var
//     var = 4;
//     pointerVar = &var; //assigning address of "var" to "pointerVar"

//     cout << "(Address of var)/(pointerVar): " << pointerVar << endl;
//     cout << "Value of var variable: " << var << endl;
//     cout << "Value of *pointerVar: " << *pointerVar << endl; 
//     // "*" is called dereference operator when used with pointers

//     /*
//         In C++, pointVar and *pointVar is completely different. 
//         We cannot do something like *pointVar = &var;
//     */

//     return 0;
// }

int main() {
    int var = 4;
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of var to 9:" << endl;

    // change value of var to 9
    var = 9;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // change value of var to 16
    *pointVar = 16;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}

/*
    Common Mistakes


int main(){

    int var, *varPoint;

    // Wrong! 
    // varPoint is an address but var is not
    varPoint = var;

    // Wrong!
    // &var is an address
    // *varPoint is the value stored in &var
    *varPoint = &var;

    // Correct! 
    // varPoint is an address and so is &var
    varPoint = &var;

    // Correct!
    // both *varPoint and var are values
    *varPoint = var;

    return 0;
}

*/