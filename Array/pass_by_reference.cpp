#include <iostream>
using namespace std;
// In C++, array parameter becomes pointer (address is passed)
void changeArr(int arr[],int size){
    cout << "in function\n";
    // Using the same memory address of original array
    // So changes here affect original array
    for(int i=0;i<size; i++) {
        arr[i] = 2* arr[i]; // modify 
    }
}
int main(){
    int arr[] = {1,2,3}; // original 
    changeArr(arr,3);
    cout << "in main\n";
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl; 
    cout << arr[1]; //still changed because original array was modified
    return 0;     
}  
         