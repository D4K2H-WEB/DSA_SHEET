// Time Complexity: O(n log m), where n is the number of elements in the array and m is the range of possible sums (from the maximum single element to the total sum of the array).
// Space Complexity: O(1), as we are using a constant amount of extra space.


class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for (int num : nums) {
            low = max(low, num);
            high += num;
        }
        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isFeasible(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    
    bool isFeasible(vector<int>& nums, int maxSum, int k) {
        int count = 1;
        int currentSum = 0;
        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                count++;
                currentSum = num;
                if (count > k) return false;
            }
        }
        return true;
    }
};