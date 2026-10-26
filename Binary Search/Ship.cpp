// Time Complexity: O(nlogm) where n is the number of weights and m is the sum of all weights
// Space Complexity: O(1)


class Solution {
public:
    int find(vector<int>& w,int cap){
        int days=1;
        int load=0;
        for(int i=0;i<w.size();i++){
            if(w[i] + load > cap){
                days++;
                load=w[i];
            }
            else 
            load+=w[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(),weights.end(),0);//sum of all elements = ex = 55
        while(l<=r){
            int mid = (l+r)/2;
            int n = find(weights,mid);
            if(n<=days){
             r=mid-1;
            }
            else l=mid+1;
        }
        return l;
        
    }
};