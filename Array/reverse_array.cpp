#include <iostream>
using namespace std;
//Time complexty is O(n)
// 2 pointer approach   
void ReverseArray(int arr[],int sz){
    int start = 0, end = sz-1;
    while(start < end) {
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }
}
int main(){
    int arr[] = {4,2,7,8,1,2,5,0};
    int sz = 8; 

    ReverseArray(arr,sz);
    
    for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

return 0;     
}