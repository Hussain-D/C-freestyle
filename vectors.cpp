#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v1;
    int ele,size;
    cout<<"Enter the size of vector:";
    cin>>size;
    for(int i=0;i<4;i++){
        cout<<"Enter an element to add:";
        cin>>ele;
        v1.push_back(ele);
    }
    display(v1);
    return 0;
}