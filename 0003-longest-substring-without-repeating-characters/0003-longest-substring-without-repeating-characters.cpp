class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0;
        int maxlen = 0 ;
        unordered_map<char , int>mp;
        for(int i =0 ; i<s.length() ; i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[len]]--;
                len++;
            }
            maxlen = max(maxlen , i - len +1);
        }
        return maxlen;
    }
};