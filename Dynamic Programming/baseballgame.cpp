#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;
        for (int i = 0; i< operations.size(); i++) {
            if (operations[i] == "C") {
                st.pop();
            } else if (operations[i] == "D") {
                st.push(2 * st.top());
            } else
                if(operations[i] == "+") {
                    int a = st.top();
                    st.pop();
                    int b = st.top();
                    st.push(a);
                    st.push(a + b);
                }
                else{
                    st.push(stoi(operations[i]));
                }
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
int main() {
    Solution s;

    vector<string> operations = {"5", "2", "C", "D", "+"};

    cout << "Result: " << s.calPoints(operations) << endl;

    return 0;
}