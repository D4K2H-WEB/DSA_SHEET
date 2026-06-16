
// Hard + STL Approach
// Time Complexity: O(n^2) in worst case due to erase and remove operations
// Space Complexity: O(1) as we are modifying the input array in place

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0 ; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
             nums.erase(remove(nums.begin() + i + 1, nums.end(), nums[i]), nums.end());
            }
        }
        return nums.size();
    }
};

// Optimal Approach
// Time Complexity: O(n) as we traverse the array once
// Space Complexity: O(1) as we are modifying the input array in place

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int x = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[x] = nums[i];
                x++;
            }
        }
        return x;
    }
};