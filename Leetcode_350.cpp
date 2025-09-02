// 350. Intersection of Two Arrays II
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2] 
// Output: [2,2]

// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [4,9]
// Explanation: [9,4] is also accepted.


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;  // map to store count of elements from nums1
        vector<int> ans;

        // Count each number in nums1
        for (auto x : nums1) {
            mp[x]++;
        }

        // Check elements in nums2
        for (auto x : nums2) {
            if (mp[x] > 0) {
                ans.push_back(x); // element is in both arrays
                mp[x]--;          // decrease the count to handle duplicates properly
            }
            else continue; // if not found or used up, skip
        }

        return ans;
      
    }
};
