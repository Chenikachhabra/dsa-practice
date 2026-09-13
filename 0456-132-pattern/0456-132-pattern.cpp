class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> st;
        int second = INT_MIN;
        for(int n= nums.size()-1 ; n >= 0 ; n--){
            if(nums[n] < second){
                return true;
            }
            while(!st.empty() && st.top()< nums[n]){
                  second = st.top();
                st.pop();
            }
            st.push(nums[n]);
           }
        
        return false;
    }
};