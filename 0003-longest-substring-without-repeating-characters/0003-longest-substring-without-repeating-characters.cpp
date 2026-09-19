class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int maxlen = 0;
        int n = s.length();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {

            mp[s[i]]++;
            
                while (mp[s[i]] > 1) {
                    mp[s[left]]--;
                    left++;
                }
            
                maxlen = max(maxlen, i - left + 1);
            
        }
        return maxlen;
    }
};