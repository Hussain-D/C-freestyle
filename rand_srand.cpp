/*
    rand() function and the seed, srand() function
    The above functions are available in the library,
    "cstdlib"(C Standard Library)
*/

#include<iostream>
#include<cstdlib>
using namespace std;

//basic rand() function
/*
    It is a pseudo random number generator function
*/
// int main(){
//     //to generate random numbers within a range    
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<1+(rand()%n)<<endl;
//     }
//     return 0;
// }

//basic srand() function
/*
    srand() generates truly random numbers. 
    Allows to specify a seed value as its parameter.
    Changing the seed value changes the return of rand()
*/
// int main(){
//     srand(0);
//     cout<<rand();
//     return 0;
// }

/*
    A solution to generate truly random numbers,
    is to use the current time as a seed value for the
    srand() function.
    We use time() function to get the no. of seconds
    We use <ctime> header for it
*/

//Generate truly random numbers

#include<ctime>

int main(){
    srand(time(0));
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<1+(rand()%n)<<endl;
    }
    return 0;
}