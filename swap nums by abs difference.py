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
