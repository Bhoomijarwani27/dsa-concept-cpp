#include <iostream>
#include<vector>
using namespace std;
// time complexity O(n) optimsed 
vector<int>pairsum(vector<int>nums,int target){
    vector<int>ans;
    int n = nums.size();
    int i=0,j= n-1;
   while(i<j){
    int pairsum = nums[i] + nums[j];
    if(pairsum > target) {
        j--;
    } else if(pairsum < target) {
        i++;
    } else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;

    }
   }
    return ans;
}

int main(){
    // sorted array 
    vector<int>nums = {2,7,11,15};
    int target = 18;

    vector<int>ans = pairsum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl; // print index


return 0;     
}