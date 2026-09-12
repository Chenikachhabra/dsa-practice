class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char nums : num) {
            while (!st.empty() && st.top() > nums && k > 0) {
                st.pop();
                k--;
            }
            st.push(nums);
        }
        while (k > 0) {
            st.pop();
            k--;
        }
        string ans;
        while (!st.empty()) {
            char element = st.top();
            ans.push_back(element);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        int i = 0;
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }
        ans = ans.substr(i);
        if (ans == "") {
            return "0";
        }
        return ans;
    }
};