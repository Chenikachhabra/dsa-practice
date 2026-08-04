class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = INT_MAX;
        int max = INT_MIN;
        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < min) {
                min = nums[i];

            }  if (nums[i] > max) {
                max = nums[i];
            } 

                seen.insert(nums[i]);
                
            
        }
        vector<int> ans;
        for (int j = min + 1; j < max; j++) {
            if (seen.find(j) == seen.end()) {
                ans.push_back(j);
            }
        }
        return ans;
    }
};