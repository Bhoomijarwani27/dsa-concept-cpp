#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[8] = {5,9,10,7,4,-4,-1,0};
    int largest = INT_MIN;  
    for(int i = 0; i<8; i++){
        //largest= max(arr[i],largest);
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest << endl;

return 0;     
}