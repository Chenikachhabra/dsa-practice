class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        sort(nums.begin() , nums.end());
        if(nums.empty()){
            return 0;
        }
        int maxi = 1;
        for(int i =1 ; i< nums.size() ; i++){
            if(nums[i] == nums[i-1]+1){
                count++;
            }
            else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                count = 1;
            }
            maxi = max(maxi , count);
        }
        return maxi;
    }
};