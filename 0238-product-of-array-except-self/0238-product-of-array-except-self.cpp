class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (n , 1);
        int leftmost = 1;
        for(int i=0 ; i<nums.size() ; i++){
            ans[i] = leftmost;
            leftmost *= nums[i];
        }
        int rightmost = 1;
        for(int i = nums.size()-1 ; i>=0 ; i--){
            
            ans[i] *= rightmost;
            rightmost *= nums[i];
        }
        return ans;
    }
};