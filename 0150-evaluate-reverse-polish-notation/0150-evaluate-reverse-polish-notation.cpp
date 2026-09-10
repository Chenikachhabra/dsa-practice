class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i =0 ; i<tokens.size() ; i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                st.push(stoi(tokens[i]));
            }
            else {
                int second = st.top();
                st.pop();
                int first = st.top();
                st.pop();
                int sum = 0;
                if(tokens[i] == "+"){
                    sum = first+second;
                }
                else if (tokens[i] == "-"){
                    sum = first - second;
                }
                else if (tokens[i] == "*"){
                    sum = first * second;
                }
                else {
                    sum = first / second;
                }
                st.push(sum);
            }
            }
        
        return st.top();
    }
};