// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    int largestElement(vector<int>& nums) {
int x = INT_MIN;
for(int i= 0 ; i<nums.size();i++){
    if(x<nums[i]){
        x=nums[i];
    }
}
return x;
    }
};