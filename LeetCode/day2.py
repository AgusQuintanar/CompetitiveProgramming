n = 6

from time import sleep

x = n

while x != 1:
    sleep(1)
    z = x
    print(str(z))
    x = sum([int(x) ** 2 for x in str(x)])
    print("x",x)
print(x)