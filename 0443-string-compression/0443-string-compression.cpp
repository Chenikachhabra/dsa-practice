class Solution {
public:
    int compress(vector<char>& chars) {
        int left = 0;
        string s;
        int write = 0;
        while (left < chars.size()) {
            int right = left;
            while (right < chars.size() && chars[right] == chars[left]) {
                right++;
            }
            int count = right - left ;
            chars[write++] = chars[left];

            if (count > 1) {
               string sum = to_string(count);
               for(char n : sum){
                chars[write++] = n;
               }
            }
            left = right;
        }
        return write ;
    }
};