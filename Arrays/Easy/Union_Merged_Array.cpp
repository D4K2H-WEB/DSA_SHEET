// Two Pointer Approach
// Time Complexity: O(m+n) where m and n are the sizes of the two input arrays.
// Space Complexity: O(m+n) in the worst case when all elements are unique across both arrays, resulting in a union array of size m+n.


class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        
        vector <int> result;

        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j])
            {
                if(result.empty() || result.back()!=nums1[i]){
                    result.emplace_back(nums1[i]);
                }
                i++; 
            }

          else if(nums1[i]>nums2[j])
            {
                if(result.empty() || result.back()!=nums2[j]){
                    result.emplace_back(nums2[j]);
                    
                }
                j++;
            }

            else
            {
                if(result.empty() || result.back()!=nums1[i]){
                    result.emplace_back(nums1[i]);
                }
                i++;
                j++;
            }
        }
        while(i<nums1.size()){
            if(result.empty() || result.back()!=nums1[i]){
                result.emplace_back(nums1[i]);
            }
            i++;
        }
         while (j < nums2.size()) {
            if (result.empty() || result.back() != nums2[j])
                result.emplace_back(nums2[j]);
            j++;
        }
        return result;
    }
};