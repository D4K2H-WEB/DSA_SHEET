// 136. Single Number
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Brute Force Approach

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
int y = 0;
        for(auto it : nums){
            int x = count(nums.begin(), nums.end(), it);
            if(x==1){
                 y = it;
                 break;
            }
        }
return y;
    }
};


// Optimized Approach
// XOR of a number with itself is 0 and XOR of a number with 0 is the number itself.
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            ans ^= x;
        }

        return ans;
    }
};


// Simple Approach
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
    }
}; 