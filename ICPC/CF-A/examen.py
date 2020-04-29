n = int(input())
lst = input().split(" ")
lst = [int(x) for x in lst]
pivot = lst[-1]
found = False
for x in range(n-2, -1, -1):
    if lst[x] < pivot:
        lst[x+1] = pivot
        found = True
    else:
        lst[x+1] = lst[x] 
    if x == 0:
        lst[0] = pivot
    print(" ".join([str(x) for x in lst]))
    if found:
        break
        

