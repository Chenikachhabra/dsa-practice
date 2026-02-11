#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        int ans = 0;
        vector<int> dp(n, 0);
        for (int i = n - 1; i >= 0; i--) {
            int steps = 0;
            while (!st.empty() && nums[i] > nums[st.top()]) {
                steps = max(steps + 1, dp[st.top()]);
                st.pop();
            }
            dp[i] = steps;
            ans = max ( ans , dp[i]);
            st.push(i);
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int> nums = {5,3,4,4,7,3,6,11,8,5,11};
    
    int result = sol.totalSteps(nums);
     cout << result;
   
    
    return 0;
}