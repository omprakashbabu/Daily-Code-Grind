// 485. Max Consecutive Ones
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.

// Example 2:
// Input: nums = [1,0,1,1,0,1]
// Output: 2

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;       // to store max consecutive ones found
        int currentCount = 0;   // to store current consecutive ones count
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                currentCount++;          // increment current count
                maxCount = max(maxCount, currentCount);  // update max if needed
            } else {
                currentCount = 0;        // reset current count if 0 encountered
            }
        }
        
        return maxCount;
    }
};
