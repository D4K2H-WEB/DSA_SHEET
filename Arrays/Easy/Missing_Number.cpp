// 268. Missing Number
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        int y = (x*(x+1))/2;
        int sum=0;
        for(auto it : nums){
            sum+=it;
        }
        int ans = y-sum;
        if(ans == 0)
        return 0;

        return ans;
    }
};