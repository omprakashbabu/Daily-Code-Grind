// 349. Intersection of Two Arrays
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
 
// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

//Solution 1
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> myset(nums1.begin(),nums1.end());
        unordered_set <int> result;

        for(auto num : nums2){
            if(myset.count(num)){
                result.insert(num);
            }
        }
        return vector <int> (result.begin(),result.end());
    }
};

//Solution 2
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Step 1: Sort one of the arrays (nums2)
        sort(nums2.begin(), nums2.end());

        set<int> result;  // To store unique common elements

        // Step 2: For each element in nums1, binary search in nums2
        for (int num : nums1) {
            if (binary_search(nums2.begin(), nums2.end(), num)) {
                result.insert(num);  // Set avoids duplicates
            }
        }

        // Step 3: Convert set to vector
        return vector<int>(result.begin(), result.end());
    }
};

