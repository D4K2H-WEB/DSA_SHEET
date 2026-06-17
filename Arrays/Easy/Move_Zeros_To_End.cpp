// Optimal Approach
// Time Complexity: O(n) as we traverse the array once
// Space Complexity: O(1) as we are modifying the input array in place

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int x = count(nums.begin(), nums.end(), 0);
        erase(nums,0);
        for(int i = 1 ; i<=x; i++){
            nums.push_back(0);
        }
    }
}; 