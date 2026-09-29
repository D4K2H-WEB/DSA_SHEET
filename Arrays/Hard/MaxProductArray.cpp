// Time Complexity = O(N)


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans = nums[0];
        int maxibest = nums[0], minibest = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int current = nums[i];
            int productWithMin = minibest * current;
            int productWithMax = maxibest * current;

            minibest = min({current, productWithMin, productWithMax});
            maxibest = max({current, productWithMin, productWithMax});

            ans = max(ans, maxibest);
        }

        return ans;
    }
};