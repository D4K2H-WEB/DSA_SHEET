// MERGE SORT ALGO

class Solution {
public:
    long long ans = 0;

    void merge(vector<int>& a, int l, int m, int r) {
        vector<int> temp;
        int i = l, j = m + 1;

        while(i <= m && j <= r) {
            if(a[i] <= a[j])
                temp.push_back(a[i++]);
            else {
                temp.push_back(a[j++]);
                ans += m - i + 1;
            }
        }

        while(i <= m) temp.push_back(a[i++]);
        while(j <= r) temp.push_back(a[j++]);

        for(int k = l; k <= r; k++)
            a[k] = temp[k-l];
    }

    void mergeSort(vector<int>& a, int l, int r) {
        if(l >= r) return;

        int m = l + (r-l)/2;

        mergeSort(a, l, m);
        mergeSort(a, m+1, r);
        merge(a, l, m, r);
    }

    long long int numberOfInversions(vector<int> nums) {
        ans = 0;
        mergeSort(nums, 0, nums.size()-1);
        return ans;
    }
};