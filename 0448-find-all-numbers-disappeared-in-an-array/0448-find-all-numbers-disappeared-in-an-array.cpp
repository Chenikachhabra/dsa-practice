class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> mp (n , -1);
        for(int i = 0; i < nums.size() ; i++){
            if(mp[nums[i]-1 ] == -1){
                mp[nums[i]-1] = 1;
            }
        }
        vector<int> ans;
        for(int i =1 ; i<=nums.size() ; i++){
            if(mp[i-1] == -1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};