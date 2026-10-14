class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string word;

        while (getline(ss, word, '/')) {
            if (word == "" || word == ".") {
                continue;
            } else if (word == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(word);
            }
        }
        string result = "";
        while(!st.empty()){
            result = "/" + st.top() + result;
            st.pop();
        }
        if(result == ""){
            return "/";
        }
        return result;
    }
};