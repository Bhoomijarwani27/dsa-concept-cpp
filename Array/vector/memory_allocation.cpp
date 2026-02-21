#include <iostream>
#include<vector>
using namespace std;
// Vector uses dynamic memory.
// If push_back() is called when capacity is full,
// it allocates new memory (usually 2x),
// copies old elements,
// deletes old memory,
// then inserts the new element.
int main(){
  vector<int>vec;
  vec.push_back(1); // 1 
  vec.push_back(2); // double 2 
  vec.push_back(3); // 4
  vec.pop_back(); // nothing change in memory 
// push_back() may increase capacity
// pop_back() only decreases size, not capacity
  cout << vec.size() << endl;
  cout << vec.capacity() << endl;
  

return 0;     
}