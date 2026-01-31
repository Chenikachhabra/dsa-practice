#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool issorted(vector<int> nums) {
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] > nums[i + 1])
                return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;
        while (!issorted(nums)) {
            int sum = INT_MAX;
            int idx = 0;
            for (int i = 0; i + 1 < nums.size(); i++) {
                int s = nums[i] + nums[i + 1];
                if (s < sum) {
                    sum = s;
                    idx = i;
                }
            }
            nums[idx] = sum;
            nums.erase(nums.begin() + idx + 1);
            operations++;
        }
        return operations;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {5 ,2 ,3 ,1};
int result = sol.minimumPairRemoval(nums);
cout<<result;
return 0;

}