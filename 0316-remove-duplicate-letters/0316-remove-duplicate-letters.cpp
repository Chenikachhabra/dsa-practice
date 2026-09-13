class Solution {
public:
    string removeDuplicateLetters(string s) {
        int freq[26] = {0};
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        stack<char> st;
        bool seen[26] = {};
        for (char ch : s) {
            freq[ch - 'a']--;

            if (seen[ch - 'a']) {
                continue;
            }
            while (!st.empty() && st.top() > ch && freq[st.top() - 'a'] > 0) {
                seen[st.top() - 'a'] = false;
                st.pop();
            }
            st.push(ch);
            seen[ch-'a']  = true;
        }
        string ans;

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};