// Majority Element
// Time Complexity: O(n)
// Space Complexity: O(1)
// Boyer-Moore Voting Algorithm


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a,c=0;

        for(auto it : nums){

            if(c==0){
                a=it;
            }

            if(a==it){
                c++;
            }
            else
            c--;
        }
       return a;
    }
};