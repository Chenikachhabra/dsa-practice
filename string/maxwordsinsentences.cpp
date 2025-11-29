#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int maxwords = 0;
       for (auto &s : sentences){
        maxwords = max(maxwords ,(int)(1+ count(s.begin() , s.end() , ' ')));
       } 
       return maxwords;
    }
};
int main() {
    Solution sol;

    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout << sol.mostWordsFound(sentences) << endl;
    
    return 0;
}