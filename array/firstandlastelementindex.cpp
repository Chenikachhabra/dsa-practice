#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
   
        int firstpos(vector<int> &nums , int target){
            int ans = -1;
            int l = 0;
            int r = nums.size()-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(nums[mid]==target){
                ans = mid;
                r = mid-1;
                }
                else if(nums[mid] < target){
                l = mid+1;
                }
                else{
                r = mid-1;
                }
            }
            return ans;
        }
        int lastpos(vector<int> &nums , int target){
            int ans = -1;
            int l =0;
            int r = nums.size()-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(nums[mid] == target){
                ans = mid;
                l = mid+1;
                }
                else if(nums[mid] < target){
                l = mid+1;
                }
                else{
                r=mid-1;
                }
            }
            return ans;
        }
         vector<int> searchRange(vector<int>& nums, int target) {
            return {firstpos(nums , target) , lastpos(nums , target)};
    }
};
int main(){
   #include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstpos(vector<int> &nums , int target){
        int ans = -1;
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int mid = (l + r) / 2;

            if(nums[mid] == target){
                ans = mid;
                r = mid - 1;   // search left
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }

    int lastpos(vector<int> &nums , int target){
        int ans = -1;
        int l = 0;
        int r = nums.size() - 1;

        while(l <= r){
            int mid = (l + r) / 2;

            if(nums[mid] == target){
                ans = mid;
                l = mid + 1;   // search right
            }
            else if(nums[mid] < target){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstpos(nums, target), lastpos(nums, target)};
    }
};

int main() {
    Solution obj;

    // Example input
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> ans = obj.searchRange(nums, target);

    cout << "First Position = " << ans[0] << endl;
    cout << "Last Position  = " << ans[1] << endl;

    return 0;
}


