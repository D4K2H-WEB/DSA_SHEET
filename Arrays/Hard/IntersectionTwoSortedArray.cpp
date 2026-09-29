// BRUTE FORCE APPROACH
// Time Complexity = O(n log d1 + m log d2 + k + s)
// Space Complexity = O(d1 + d2 + min(n,m))


class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp1;
        map<int,int> mp2;
        vector<int> ans;
        int x = INT_MIN;
                int y = INT_MIN;
                int q = INT_MAX;
                int r = INT_MAX;

        for(int it : nums1){
         mp1[it]++ ;
         x = max(x,it);
         q = min(q,it);
        }
          for(int it : nums2){
         mp2[it]++ ;
           y = max(y,it);
           r = min(r,it);
        }
int n = max(x,y);
int w = min(q,r);
for(int i =w;i<=n;i++){
    if(mp1[i]>0 && mp2[i]>0 ){
        int p = min(mp1[i],mp2[i]);
        while(p>=1){
      ans.push_back(i);
      p--;}
    }
}
        return ans;
    }
};



// OPTIMAL APPROACH 
// Time Complexity = O(n + m)
// Space Complexity = O(n)
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        
        int i = 0, j = 0;

        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j])
                i++;
            else
                j++;
        }

        return ans;
    }
};