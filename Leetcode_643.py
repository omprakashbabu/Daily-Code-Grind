# 643. Maximum Average Subarray I
# You are given an integer array nums consisting of n elements, and an integer k.
# Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

# Example 1:
# Input: nums = [1,12,-5,-6,50,3], k = 4
# Output: 12.75000
# Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

# Example 2:
# Input: nums = [5], k = 1
# Output: 5.00000

# Constraints:
# n == nums.length
# 1 <= k <= n <= 105
# -104 <= nums[i] <= 104

# class Solution:
#     def findMaxAverage(self, nums: List[int], k: int) -> float:
#         max_avg = []

#         left = 0
#         right = k-1

#         # for i in range(len(nums)):
#         while right < len(nums):
#             avg = sum(nums[left:right+1]) / k
#             max_avg.append(avg)
#             left += 1
#             right += 1

#         return max(max_avg)


class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        cur_sum = sum(nums[:k])

        max_avg = cur_sum / k

        for i in range(k,len(nums)):
            cur_sum += nums[i] - nums[i-k]
            avg = cur_sum / k
            max_avg = max(max_avg,avg)

        return max_avg
