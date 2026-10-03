// Time Complexity: O(logN)
// Space Complexity: O(1)


class Solution {
public:
    int mySqrt(int x) {
   long long int l=1,r=x;
   long long int ans=0;
   while(l<=r){
    long long int mid = (l+r)/2;
    if((mid*mid)<=x){
        ans=mid;
        l=mid+1;
    }
    else r=mid-1;
   }
   return ans;
    }
};