#include <iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {3,6,8,9,0,7,-1,8};
    int sz= 8;
    int smallest = INT_MAX;
    int largest =  INT_MIN;
        for(int i=0;i<sz;i++){
            smallest = min(arr[i],smallest);
            largest = max(arr[i],largest);
        }
        int smallestIndex = -1;
int largestIndex = -1;

for(int i = 0; i < sz; i++) {
    if(arr[i] == smallest) {
        smallestIndex = i;
        break;   // stop after first match
    }
}

for(int i = 0; i < sz; i++) {
    if(arr[i] == largest) {
        largestIndex = i;
        break;
    }
 }  
       
        swap(arr[smallestIndex],arr[largestIndex]);
        for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
        }
    
    cout << endl;


return 0;     
}