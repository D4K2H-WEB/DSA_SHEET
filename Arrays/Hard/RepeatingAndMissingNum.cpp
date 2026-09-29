// Time Complexity = O(N + N.LOGN)

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for(int i = 1; i < nums.size(); i++)
            if(nums[i] == nums[i-1])
                ans.push_back(nums[i]);

        for(int i = 1; i <= nums.size(); i++) {
            if(!binary_search(nums.begin(), nums.end(), i)) {
                ans.push_back(i);
                break;
            }
        }

        return ans;
    }
};