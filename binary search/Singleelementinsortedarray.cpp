#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            // make mid even
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                low = mid + 2;
            } else {
                high = mid;
            }
        }

        return nums[low];
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    int result = obj.singleNonDuplicate(nums);

    cout << "Single element is: " << result << endl;

    return 0;
}