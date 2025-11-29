#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words,
                                         vector<int>& groups) {
        vector<string> ans;
        int n = groups.size();
        ans.push_back(words[0]);
        for(int i =1 ; i<n ; i++){
            if(groups[i] != groups[i-1]){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};
int main(){
      vector<string> words = {"e", "a", "b"};
    vector<int> groups = {0, 0, 1};
Solution sol;
    vector<string> result = sol.getLongestSubsequence(words, groups);


    for (string &w : result) {
        cout << w << "\n";
    }

    return 0;
}