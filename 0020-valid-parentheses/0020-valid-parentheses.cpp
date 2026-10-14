class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i =0 ; i< s.length() ; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
            if(st.empty()){
                return false;
            }
            
            char chh = st.top();
            st.pop();
             if(chh == '(' && s[i] != ')' || chh == '[' && s[i] != ']' || chh == '{' && s[i] != '}'){
                return false;
            }
            }
        }
        return st.empty();
    }
};