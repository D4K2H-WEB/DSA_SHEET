// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        int l = 0;
        int r = arr.size() - 1;
        int ans1 = -1;

        // Last occurrence
        while(l <= r){
            int mid = (l + r) / 2;

            if(arr[mid] <= target){
                if(arr[mid] == target)
                    ans1 = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }

        int x = 0;
        int y = arr.size() - 1;
        int ans2 = -1;

        // First occurrence
        while(x <= y){
            int mid = (x + y) / 2;

            if(target <= arr[mid]){
                if(arr[mid] == target)
                    ans2 = mid;
                y = mid - 1;
            }
            else
                x = mid + 1;
        }

        if(ans1 == -1)
            return 0;

        return ans1 - ans2 + 1;
    }
};