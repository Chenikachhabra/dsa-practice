class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                }

                char chh = st.top();
                st.pop();

                if(chh == '(' && ch != ')' || chh == '{' && ch != '}'  || chh == '[' && ch != ']' ){
                    return false;
                }
            }
        }
        return st.empty();
    }
};