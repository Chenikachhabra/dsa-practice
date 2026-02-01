#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
      int n = num.size();
      for (int i =n-1 ; i>=0 ; i--){
        if((num[i] - '0') % 2 == 1){
            return num.substr(0 , i+1);
        }
      }
      return "";
    }
};
int main(){
    Solution sol;
     string num;
    cout << "Enter the number string: ";
    cin >> num;

    string result = sol.largestOddNumber(num);

    if (result == "")
        cout << "No odd number possible\n";
    else
        cout << "Largest odd number is: " << result << endl;

    return 0;
}