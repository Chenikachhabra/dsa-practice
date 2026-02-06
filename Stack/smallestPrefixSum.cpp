#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prefixsum = nums[0];
        int i =1;
        int n = nums.size();
        while(i<n && nums[i]==nums[i-1]+1){
            prefixsum += nums[i];
            i++;
        }
        int ans = prefixsum;
        unordered_set<int> st (nums.begin() , nums.end());
        while(st.count(ans)){
          ans++;
          }
          return ans;
    }
};
int main(){
Solution sol;
vector<int> nums = {1,2,3,2,5};
int result = sol.missingInteger(nums);
cout << "smallest prefix sum: " << result;

   

    return 0;
}