// Rotate_Array

// Not Optimal Approach For Space Complexity
// Time Complexity: O(n) 
// Space Complexity: O(k) as we are using extra space to store the last k elements


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
 int l = nums.size()-k , x=0;

 while(x<l){
    nums.push_back(nums[x++]);
 }
 nums.erase(nums.begin(),nums.begin()+l);
    }
};

// Optimal Approach
// Time Complexity: O(n) as we traverse the array three times
// Space Complexity: O(1) as we are modifying the input array in place

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
}; 