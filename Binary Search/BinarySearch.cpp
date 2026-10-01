// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r=nums.size()-1;
        int mid = (l+r)/2;
        int ans = -1;
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target){
             ans=mid;
             break;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
        }
        return ans;
    }
};