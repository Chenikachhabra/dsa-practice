class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans (temperatures.size() , 0);
        for (int temp =0 ; temp <temperatures.size() ; temp++) {

            while (!st.empty() && temperatures[temp] > temperatures[st.top()]) {
               ans[st.top()] = temp - st.top();
               st.pop();
            }
            st.push(temp);
        }
        return ans;
    }
};