// Time Complexity: O(n)
// Space Complexity: O(n)


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
      vector<int> ans(nums.size());
      int x = 0 ;
      int y = 1 ; 
      for(int i = 0 ; i<nums.size();i++){
        if(nums[i]>0){
            ans[x]=nums[i];
            x=x+2;
        }
        else if(nums[i]<0){
            ans[y]=nums[i];
            y=y+2;
        }
      }
      return ans;
         
    }
};