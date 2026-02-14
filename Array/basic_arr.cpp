#include <iostream>
using namespace std;
int main(){
    // create  fixed size array(static array)
    int arr[5] = {2,5,2,7,8}; 
    int marks[] = {6,8,9}; 
    //acess the array  
   cout << arr[0] << endl; // using index 
   cout << "\n";
   for(int i = 0; i < 5; i++){ //using loop 
    cout << arr[i] << endl;
   }
   // change the value 
   arr[0]= 8;
    cout << "\n";
   for(int i = 0; i < 5; i++){ //using loop 
    cout << arr[i] << endl;
   }
   // count array size 
    cout << sizeof(marks) << endl;// give bytes in int is 4 bytes so 12/4 = 3 
   
 //int s = sizeof(marks) / sizeof(marks[0]);  // 12/4
 int s = sizeof(marks) /sizeof(int);

for(int j = 0; j < s; j++){
    cout << marks[j] << endl;
}
cout << "\n";
// add values in array 
int rollno[7];
for(int i = 0;i<7 ; i++){
    cin >> rollno[i];

}
 
for(int i = 0;i<7 ; i++){
    cout <<  rollno[i] << endl;                  

}


return 0;     
}