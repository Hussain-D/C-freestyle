/*
    sizeof() operator example

    You are given an array of integers which represents the ages of
    each employee in the officee. You need to obtain the number of employees,
    but there are too many to count manually.
    Write a statement that will calculate the elements count defined in array
    and output the count.
    
*/

#include<iostream>
using namespace std;

int main(){
    int ages[]={19,24,36,45,56,52,21,27,24,34,29,60,40,42,45,47,22,30,34,20,18,26,51,43};
    cout<<(sizeof(ages)/sizeof(ages[0]));
    return 0;
}