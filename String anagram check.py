# Problem: Check If Two Strings Are Anagrams
# Description:
# Given two strings str1 and str2, determine if they are anagrams of each other.
# Two strings are anagrams if they contain the same characters with the same frequencies, but possibly in a different order.

# Example 1:
# Input:
# str1 = "listen"
# str2 = "silent"
# Output:
# True

# Example 2:
# Input:
# str1 = "hello"
# str2 = "world"
# Output:
# False


def anagrams(str1, str2):
    if len(str1) != len(str2):
        return False

    str1 = sorted(str1)
    str2 = sorted(str2)

    for i in range(len(str1)):
        if str1[i] != str2[i]:
            return False

    return True

str1 = input("Enter string 1: ")
str2 = input("Enter string 2: ")

print(anagrams(str1, str2))
