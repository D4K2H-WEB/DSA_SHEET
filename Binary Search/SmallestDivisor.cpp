// Time Complexity : O(nlogm) where n is the size of the array and m is the maximum element in the array
// Space Complexity : O(1) no extra space is used

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
   
       int l = 1;
       int r = *max_element(nums.begin(),nums.end());
int ans=-1;
       while(l<=r){
        int mid = (l+r)/2;
        int sum=0;
 for(int i =0;i<nums.size();i++){
    sum = sum + ceil((double)(nums[i])/(double)(mid));
 }
 if(sum<=threshold){
    ans = mid;
    r = mid-1;
 }
 else l = mid+1;

       } 
       return ans;
    }
};