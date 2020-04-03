a = [4,1,2,1,2]

x = a[0]

for i in range(1, len(a)):
    x ^= a[i]


print(x)


