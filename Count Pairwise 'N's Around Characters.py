# Problem: Count Pairwise 'N's Around Characters
# Description:
# You are given a string strr of length n consisting of uppercase and lowercase English letters.
# You need to compute a special sum using the following rule:
#     For each character in the string that is not 'n' (lowercase),
#     Count the number of 'N' (uppercase) characters to the left of it.
#     Count the number of 'N' (uppercase) characters to the right of it.
#     Multiply these two counts and add the product to a running total.
#     Return the final total sum.

def returnsum(n, strr):
    summ = 0
    for i in range(n):
        if strr[i] == 'n':
            continue
        else:
            left = strr[0:i].count('N')
            right = strr[i+1:n].count('N')
            prod = left * right
            summ += prod
    return summ

strr = input("Enter a string: ")
n = len(strr)

print(returnsum(n, strr))
