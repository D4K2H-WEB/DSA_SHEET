// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int lowerBound(vector<int> &nums, int x) {
        int l = 0, r = nums.size() - 1;
        int ans = nums.size();

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(nums[mid] >= x) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};