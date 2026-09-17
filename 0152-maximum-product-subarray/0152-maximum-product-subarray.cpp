class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = nums[0];
        int mini = nums[0];
        int maximum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];
            int a = maxi * x;
            int b = mini * x;
            maxi = max(x, max(a, b));
            mini = min(x, min(a, b));

            maximum = max(maximum, maxi);
        }
        return maximum;
    }
};