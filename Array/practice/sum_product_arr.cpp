#include <iostream>
using namespace std;
int sum(int arr[],int sz){
    int n = 0;
    for(int i=0;i < sz;i++){
        n =  n + arr[i];  
    }
    return n;
}
int product(int arr[],int sz){
     int p = 1; 
    for(int i=0;i < sz;i++){
        p =  p * arr[i];  
    }
    return p;
}


int main(){
    int arr[] = {1,3,5,6,7,8,9,1,4,2};
    int sz = 10;
    cout <<  "sum: " << sum(arr , sz) << endl;
    cout <<  "product: " << product(arr , sz) << endl;


return 0;     
}