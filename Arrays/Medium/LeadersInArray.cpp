// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> ans(0);

      int maxi= INT_MIN;

      for(int i = nums.size()-1;i>=0;i--){
        if(nums[i]>maxi){
        ans.emplace_back(nums[i]);
        }
        maxi = max(nums[i],maxi);
      }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};