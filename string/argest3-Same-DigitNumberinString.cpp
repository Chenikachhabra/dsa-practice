#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";   // empty string

        for (int i = 0; i + 2 < num.size(); i++) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]) {
                string curr = num.substr(i, 3);
                if (curr > ans) {   // want the largest
                    ans = curr;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    string num;
    cout << "Enter the number string: ";
    cin >> num;

    string result = sol.largestGoodInteger(num);

    if (result == "")
        cout << "No good integer found\n";
    else
        cout << "Largest good integer is: " << result << endl;

    return 0;
}