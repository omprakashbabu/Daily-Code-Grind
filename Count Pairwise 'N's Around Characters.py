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
