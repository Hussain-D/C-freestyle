#include<iostream>
// using namespace std;

bool makeBrick(int small, int big, int goal){
    if((small + big*5) < goal) return false;
    if((goal%5) > small) return false;
    return true;
}

int main(){
    int s,b,g;
    std::cout << "Enter Small, Big, Goal: ";
    std::cin >> s >> b >> g;
    std::cout << "Is it possible? "; 
    if(makeBrick(s,b,g)) std::cout << "True" << std::endl;
    else std::cout << "False" << std::endl;
}