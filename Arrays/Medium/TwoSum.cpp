// Brute Force Solution
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for(int i = 0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                return {i,j};
                }
            }
        }
    return {};
    }
};


// Optimal Solution 
// Time Complexity: O(nlogn)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> copy;

        for(int i = 0; i < nums.size(); i++) {
            copy.push_back({nums[i], i});
        }

        sort(copy.begin(), copy.end());

        int i = 0;
        int j = copy.size() - 1;

        while(i < j) {
            int sum = copy[i].first + copy[j].first;

            if(sum > target) {
                j--;
            }
            else if(sum < target) {
                i++;
            }
            else {
                return {copy[i].second, copy[j].second};
            }
        }

        return {};
    }
};


// Optimal Solution using Hash Map
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};