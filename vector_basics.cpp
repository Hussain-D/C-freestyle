#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Initialization methods
    vector <int> vector1 = {1,2,3,4,5};
    vector <int> vector2 {1,2,3,4,5};
    vector <int> vector3(5,2); //equal to {2,2,2,2,2}

    /*
    BASIC VECTOR OPERATIONS
    1. Add elements
    2. Access elements
    3. Change elements
    4. Remove elements
*/

    cout<<"Initial vector: ";
    for(int &i: vector1){
        cout<<i<<" ";
    }
    cout<<endl;

    // ADD elements - push_back() function
    // adding 6 to the end of vector vec1
    vector1.push_back(6);

    // Note: We can also use the 'insert()' and 'emplace()' functions to add elements to a vector.
    vector1.insert(vector1.begin()+5,0);
    //insert() - vector_name.insert(position,element_to_add)
    //           vector_name.insert(position,iterator1,iterator2)

    cout<<"Updated vector: ";
    for(int &i : vector1){
        cout<<i<<" ";
    }
    cout<<endl;

    // ACCESS elements
    cout<<"Element at index 2 - "<<vector1.at(2)<<endl;
    cout<<"Element at index 5 - "<<vector1.at(5)<<endl;
    
    // Note: Like an array, we can also use the square brackets [] to access vector elements.
    /*
        However, the at() function is preferred over [] because at() throws an 
        exception whenever the vector is out of bound, while [] gives a garbage value.
    */
    cout<<"Element at index 6 - "<<vector1[6]<<endl;

    //CHANGE Elements
    vector1.at(5) = 6;
    vector1[6] = 7;

    cout<<"Updated vector: ";
    for(int &i : vector1){
        cout<<i<<" ";
    }
    cout<<endl;

    // DELETE Elements - pop_back() function
    vector1.pop_back();

    cout<<"Updated vector after removing: ";
    for(int &i : vector1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}