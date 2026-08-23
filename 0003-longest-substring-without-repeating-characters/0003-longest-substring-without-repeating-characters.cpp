class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> hash (256 , -1);
        int left = 0;
        int right = 0;
        int maxlen = 0;
        while (right < s.length()){
            if(hash[s[right]] != -1){
                left = max(left , hash[s[right]]+1);

            }
            hash[s[right]] = right;
            maxlen = max ( maxlen , right -left +1);
            right++;
        }
        return maxlen;
    }
};