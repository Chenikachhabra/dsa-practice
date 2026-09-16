class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int count = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[k-1] != nums[i]) {
                nums[k] = nums[i];
                k++;
                count++;
            }
        }
        return count;
    }
};