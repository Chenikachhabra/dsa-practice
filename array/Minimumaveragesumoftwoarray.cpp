#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int r = nums.size() - 1;
        double ans = DBL_MAX;

        while (i < r) {
            double avg = (nums[i] + nums[r]) / 2.0;
            ans = min(ans, avg);
            i++;
            r--;
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 3, 5, 7, 9, 2};
    double result = sol.minimumAverage(nums);

    cout << "Minimum Average: " << result << endl;

    return 0;
}
