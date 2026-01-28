#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int minlength = INT_MAX;
        int sum = 0;
        for (int right = 0; right < n; right++) {
            sum += nums[right];
            while (sum >= target) {
                minlength = min(minlength, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return minlength == INT_MAX ? 0 : minlength;
    }
};
int main() {
    Solution sol;

    int target = 7;
    vector<int> nums = {2, 3, 1, 2, 4, 3};

    cout << sol.minSubArrayLen(target, nums) << endl;

    return 0;
}