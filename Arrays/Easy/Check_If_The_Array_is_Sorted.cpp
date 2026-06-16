

//Manual Rotation of an array and check if it is sorted or not - Approach 
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        if(pivot == -1) return true; 

        vector<int> temp;

        for(int i = pivot + 1; i < n; i++) {
            temp.push_back(nums[i]);
        }

        for(int i = 0; i <= pivot; i++) {
            temp.push_back(nums[i]);
        }

        for(int i = 0; i < n - 1; i++) {
            if(temp[i] > temp[i + 1]) {
                return false;
            }
        }

        return true;
    }
};




// Optimal Approach
// Time Complexity: O(n)
// Space Complexity: O(1)

class solution {
public:

    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        
        if (nums[n - 1] > nums[0])
            count++;

        return count <= 1;
    }
};