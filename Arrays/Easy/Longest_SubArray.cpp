// Brute Force Solution
// Time Complexity: O(n^2) 
// Space Complexity: O(1)
// Valid for negative numbers as well


class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int t =0;
        for(int i = 0 ; i<nums.size()-1;i++){
            for(int j = i ; j<nums.size();j++){
                int sum+=nums[j];
                if(sum==k){
                    int x = j-i;
                t = max(x,t);
                }
            }
        }
        return t;
    }
};


// Optimized Approach
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<long long, int> mp;

        long long sum = 0;
        int maxLen = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (sum == k) {
                maxLen = i + 1;
            }

            long long rem = sum - k;

            if (mp.find(rem) != mp.end()) {
                int len = i - mp[rem];
                maxLen = max(maxLen, len);
            }

            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }

        return maxLen;
    }
};