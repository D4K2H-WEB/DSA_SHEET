// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i]==target){
                return i;
                break;
            }
            
        }
        return -1;
    }
};