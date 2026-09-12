class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> st;
        vector<int> ans;
        for (int i = prices.size()-1; i >= 0 ; i--) {

            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }

            if (!st.empty()) {
                int sum = prices[i] - st.top();
                ans.push_back(sum);
               
            } else {
                ans.push_back(prices[i]);
                
            }
             st.push(prices[i]);
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};