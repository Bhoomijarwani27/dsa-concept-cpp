#include <iostream>
using namespace std;
// time complexty O(n)
int linearsearch(int arr[] , int sz, int target){
    for(int i = 0;i<sz;i++){
        if(arr[i] == target){
            return i; // found   
        }
    }
    return -1; // not found 
}
int main(){
                                          
    int target ; 
    cout << "enter the element:";
    cin >> target;
    int arr[]= {1,2,4,5,7,8,9,0};
    int sz = 8;

    cout << linearsearch(arr , sz ,target)<<endl;
    
return 0;     
}