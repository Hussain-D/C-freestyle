#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<char> arr = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};
//     cout<<arr.at(0)<<"\n"<<arr.at(4)<<"\n"<<arr.at(11)<<"\n";
// }

// int main(){
//     char word[]={'c','h','a','m','p','i','o','n','s','h','i','p'};
//     cout<<word[0]<<'\n'<<word[4]<<'\n'<<word[11];
//     return 0;
// }

// int main(){
//     int myArr[5] = {1,2,3,4,5};
//     for(int x=0; x<5; x++){
//         myArr[x] += 1;
//     }
//     int i=0;
//     for(int n: myArr){
//         cout<<n<<" : "<<myArr[i]<<endl;
//         i++;
//     }
//     return 0;
// }

int main(){
    vector<int> myArr {1,2,3,4,5};
    for(int &num : myArr){
        num += 1;
    }
    int i=0;
    for(const int &n : myArr){
        cout<<n<<" : "<<myArr[i]<<endl;
        i++;
    }
    return 0;
}