class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int count = 0;
        int left = 0;

        for (int i = 0; i < fruits.size(); i++) {
            mp[fruits[i]]++;

            while (mp.size() > 2) {
                mp[fruits[left]]--;

                if (mp[fruits[left]] == 0) {
                    mp.erase(fruits[left]);
                }

                left++;
            }

            count = max(count, i - left + 1);
        }

        return count;
    }
};