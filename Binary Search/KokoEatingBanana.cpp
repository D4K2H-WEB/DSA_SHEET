// Time Complexity: O(nlogm) where n is the number of piles and m is the maximum number of bananas in a pile
// Space Complexity: O(1)


class Solution {
public:
int total(vector<int> &v, int hh){
    int th = 0;
    for(int i = 0;i<v.size();i++){
th = th + ceil((double)v[i]/(double)hh);
    }
    return th;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());

        
        while(l<=r){
            int mid = (l+r)/2;
int th = total(piles,mid);
            if(th<=h){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
    }
};