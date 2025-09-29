# Problem: Swap Adjacent Elements Based on Absolute Difference

# Given an integer n and a list nums of n integers, perform a single left-to-right pass through the list.
# For every adjacent pair of elements, if the absolute difference between them is between 2 and 4 inclusive, swap them.

# Return the modified list after applying the swaps.

Example 1
Input:
n = 5
nums = [1, 3, 8, 5, 10]

Output:
[3, 1, 5, 10, 8]


def modifyarr(n, nums):
    for i in range(n - 1):
        if 2 <= abs(nums[i] - nums[i + 1]) <= 4:
            nums[i], nums[i + 1] = nums[i + 1], nums[i]
    return nums

n = int(input("Enter the number of elements of the list: "))
nums = []
for i in range(n):
    nums.append(int(input(f"Enter element {i}: ")))

print("Modified array:", modifyarr(n, nums))
