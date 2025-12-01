#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector <string> arr;
       for(int i : nums){
arr.push_back(to_string(i));
       } 
       sort(arr.begin() , arr.end() , [](string &a , string &b) {
        return a+b >b+a ; 
       });
       if(arr[0] == "0") return "0";
       string result;
       for(auto &s : arr){
result += s;
       }
       return result;
    }
};
int main(){
        vector<int> nums = {3, 30, 34, 5, 9};
Solution obj;
    string ans = obj.largestNumber(nums);

    cout << "Largest number formed: " << ans << endl;

    return 0;
}

