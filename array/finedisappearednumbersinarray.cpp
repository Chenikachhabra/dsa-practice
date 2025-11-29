#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       int n = nums.size();
       for(int i = 0 ; i< n ; i++){
        int index = abs(nums[i])-1;
        if(nums[index]>0){
            nums[index] = -nums[index];
        }
       } 
       vector<int> ans;
       for(int i =0; i<n ; i++){
        if(nums[i]> 0){
            ans.push_back(i+1);
        }
       }
       return ans;
    }
};
int main() {
    // Sample input
    vector<int> nums = {4,3,2,7,8,2,3,1};

    Solution obj;
    vector<int> result = obj.findDisappearedNumbers(nums);

    cout << "Missing numbers: ";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}