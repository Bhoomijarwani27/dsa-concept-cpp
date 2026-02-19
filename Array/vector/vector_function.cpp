#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {1,2,3};  
    // size of vector 
    cout << "size: "<< vec.size()<<endl;
    // add element at end
    vec.push_back(1);
    for(int val:vec){
        cout << val << endl;
    }
    cout << "after push back size: " << vec.size() << endl;
    // remove element  at end
    vec.pop_back();
    for(int val:vec){
        cout << val << " ";
    }
    cout << endl;
    // to get front element 
    cout << vec.front() << endl;
    // to get last element
    cout << vec.back() << endl;
    // give specific element 
    cout << vec.at(1);


return 0;     
}