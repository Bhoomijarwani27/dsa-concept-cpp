#include <iostream>
#include<vector>
using namespace std;
/* vector - dynamic arrays that can automatically resize themselves, offering more flexibility,
 safety, and functionality compared to fixed-size, traditional arrays. */
int main(){
    // 3 ways to create vector 
    vector<int>vec1;  // 0   no space occuped     --method 1 
    //cout << vec1[0] ; // Accessing empty vector index causes undefined behavior (program crash).
    vector<int>vec2 = {1,2,3};   //  -- method 2
    cout << vec2[0] << endl;
    vector<int>vec3(3,0); // size of vector like 3  , value all have same value  like 0   --method 3
    cout << vec3[0] << endl; //0
    cout << vec3[1] << endl; //0
    cout << vec3[2] << endl; //0 
    // Loop on vector 
    vector<char>vec = {'a','b','c','d'};
    for(char i: vec){
        cout << i << endl;
    }
return 0;     
}