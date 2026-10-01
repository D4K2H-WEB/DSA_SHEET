// Time Complexity = O(logn)
// Space Complexity = O(1)

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
   int l = 0;
   int r = nums.size()-1;
   int ans1 = -1;
   int ans2 = -1;
vector<int> ans;
if(nums[nums.size()-1]<x){
    ans1=nums[nums.size()-1];
    ans2=-1;
    ans.push_back(ans1);
   ans.push_back(ans2);
   return ans;
}
if(nums[nums.size()-1]>x && nums[0]>x){
    ans1=-1;
    ans2=nums[0];
    ans.push_back(ans1);
   ans.push_back(ans2);
   return ans;
}

   while(l<=r){
 int mid = (l+r)/2;

 if(nums[mid]>=x){
    ans1=nums[mid-1];
    ans2 = nums[mid];
    if(nums[mid]==x){
        ans1=nums[mid];
    }
    r = mid -1;
 }
 else {
    l = mid+1;
 }

   }
   ans.push_back(ans1);
   ans.push_back(ans2);
   return ans;


    }
};