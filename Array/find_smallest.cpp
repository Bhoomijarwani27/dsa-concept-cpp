#include <iostream>
#include <climits>
using namespace std;
int main(){
    // in c++ infinte number is INT_SMALLEST the largest number
    int arr[8] = {2,4,5,9,0,1,-6,8};
    int smallest = INT_MAX;// take biggest value 
    for(int i = 0; i < 8; i++){ // check if arr is small then change that 
    // if(arr[i]< smallest){
    //     smallest = arr[i];
    // } 
    // short way 
    smallest = min(arr[i],smallest);
}
    cout << smallest<< endl;
    
return 0;     
}