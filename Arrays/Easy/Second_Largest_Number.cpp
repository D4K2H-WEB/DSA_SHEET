//Time Complexity: O(n)
//Space Complexity: O(1)


class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int secondLargest = INT_MIN;

        for(int num : nums) {
            if(num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if(num > secondLargest && num < largest) {
                secondLargest = num;
            }
        }
 
        return secondLargest;
    }
};