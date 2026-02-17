#include <iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,4,1};
    int arr2[] = {2,3,4,5,8};
    int sz= 5;

    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";

            }
        }
    }

return 0;     
}