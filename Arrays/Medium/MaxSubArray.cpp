// Maximum Subarray
// Time Complexity: O(n)
// Space Complexity: O(1)
// KADAME'S ALGORITHM 


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0 ;
        int maxi = INT_MIN;
        for(int k : nums){
               sum +=k;
               maxi = max(sum,maxi);
               if(sum<0) sum=0;
        }
        return maxi;
    }
};