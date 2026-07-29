// Dynamic Programming
// Time Complexity: O(n)
// Space Complexity: O(1)



class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int mp=0;
        for(int i=1; i<prices.size();i++){
            int cost = prices[i]-mini;
            mp=max(mp,cost);
            mini=min(mini,prices[i]);
        }
        return mp;
    }
};