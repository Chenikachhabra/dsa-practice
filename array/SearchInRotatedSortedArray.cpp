#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target && target<nums[mid]){
                    right=mid-1;
                }
                
                else{
                    left = mid+1;
                }
            }
            else{
                if(target<=nums[right] && target> nums[mid]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
            }
           
            return -1;
        }
    
};
int main(){
    vector<int> nums = {4,5,6,70,1,2,3};
int target = 4;
Solution sol;
int index = sol.search(nums,target);

    if (index != -1)
        cout << "Target found at index: " << index << endl;
    else
        cout << "Target not found" << endl;
return 0;
}