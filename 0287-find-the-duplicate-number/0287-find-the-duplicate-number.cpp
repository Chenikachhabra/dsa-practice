class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n+1, -1);
        for (int i = 0; i < nums.size(); i++) {
            if (arr[nums[i]] == -1) {
                arr[nums[i]] = 0;
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
};