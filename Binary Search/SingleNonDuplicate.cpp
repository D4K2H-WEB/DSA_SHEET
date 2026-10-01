// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0;
        int r = 1;
if(nums.size()==1){
    return nums[0];
}
        while(l<=r && r<nums.size()){
         if(nums[l]!=nums[r]){
            return nums[l];
         }
         if(nums[l]==nums[r]){
            l=l+2;
            r=r+2;
            
         }
         if(r>nums.size()-1){
            return nums[l];
         }
        }
        return 0;
    }
};