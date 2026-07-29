// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int in = -1;
        int n = nums.size();
        for(int i = n-2; i >=0;i--){
            if(nums[i]<nums[i+1]){
                in=i;
                break;
            }
        }
        if(in==-1){
            reverse(nums.begin(),nums.end());
            
        }
       else if(in!=-1){
        for(int i = n-1; i>in;i--){
            if(nums[i]>nums[in]){
                swap(nums[i],nums[in]);
                break;
            }

        }
        reverse(nums.begin()+in+1,nums.end());}
        
    }
};