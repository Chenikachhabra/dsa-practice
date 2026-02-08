#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        int n = num.size();

        // edge case
        if (n == k) return "0";

        // main greedy + stack logic
        for (int i = 0; i < n; i++) {
            char ch = num[i];

            while (!st.empty() && k > 0 && st.back() > ch) {
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }

        // if k still left, remove from end
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }

        // build answer, remove leading zeroes
        string ans = "";
        bool leadingZero = true;

        for (char c : st) {
            if (leadingZero && c == '0') continue;
            leadingZero = false;
            ans += c;
        }

        return ans.empty() ? "0" : ans;
    }
};

int main() {
    Solution sol;

    string num;
    int k;

    // test input
    num = "1432219";
    k = 3;

    cout << sol.removeKdigits(num, k) << endl;  // expected: 1219

    return 0;
}
