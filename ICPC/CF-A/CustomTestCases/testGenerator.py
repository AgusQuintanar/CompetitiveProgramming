import random
import math
f = open("test2.txt", "w")

n = 10000000
f.write(str(n)+"\n")
for x in range(n):
    f.write(str(random.randint(1, int(math.sqrt(n))))+" ")
    f.write(str(random.randint(1, int(math.sqrt(n))))+"\n")

f.close()