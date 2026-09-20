class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int carry = 0;
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int x;
            if (i >= 0) {
                x = num1[i] - '0';
            } else {
                x = 0;
            }
            int y;
            if (j >= 0) {
                y = num2[j] - '0';
            } else {
                y = 0;
            };
            int sum = x + y + carry;
            if (sum >= 10) {
                result.push_back((sum % 10) + '0');
            } else {
                result.push_back(sum + '0');
            }
            carry = sum / 10;
            i--;
            j--;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};