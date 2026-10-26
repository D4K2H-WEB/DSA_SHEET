// Time Complexity : O(nlogn)
// Space Complexity : O(1)


class Solution {
public:
bool possible(vector<int>& arr,int day,int m,int k){
    int cnt=0;
    int bcnt=0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<=day){
            cnt++;
        }
        else {
            bcnt += cnt/k;
            cnt = 0;
        }
    }
    bcnt += cnt/k;
    return bcnt>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long val = m*1LL*k*1LL;
        if(val>bloomDay.size()) return -1;
        int x = INT_MIN;
        int y = INT_MAX;

        for(int i =0;i<bloomDay.size();i++){
            x = max(bloomDay[i],x);
           y = min(bloomDay[i],y);
        }
        int l = y , r = x;
        while(l<=r){
            int mid = l + (r - l) / 2;
            if(possible(bloomDay,mid,m,k)){
                r=mid-1;
            }
            else l=mid+1;
        }
        return l;
        
    }
};