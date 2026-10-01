// Time Complexity: O(log n)
 // Space Complexity: O(1)

class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1)
            return nums[0];

        if (nums[0] < nums[nums.size() - 1])
            return nums[0];

        int l = 0;
        int r = nums.size() - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (mid > 0 && nums[mid] < nums[mid - 1]) {
                return nums[mid];
            }

            if (mid < nums.size() - 1 && nums[mid] > nums[mid + 1]) {
                return nums[mid + 1];
            }

            if (nums[mid] >= nums[l])
                l = mid + 1;
            else
                r = mid - 1;
        }

        return nums[0];
    }
};