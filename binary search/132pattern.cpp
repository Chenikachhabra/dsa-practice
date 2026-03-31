#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        int second = INT_MIN;
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < second)
                return true;

            while (!st.empty() && nums[i] > st.top()) {
                second = st.top();
                st.pop();
            }

            st.push(nums[i]);
        }

        return false;
    }
};

int main() {
    vector<int> nums = {3, 1, 4, 2};

    Solution obj;

    if (obj.find132pattern(nums))
        cout << "True";
    else
        cout << "False";

    return 0;
}