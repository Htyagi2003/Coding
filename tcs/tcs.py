a = list(map(int, input().split()))
W = int(input())
s = 0
e = len(a) - 1
a.sort()
vn= 0
while s <= e:
    if a[s] == 0:
        s+= 1
        continue
    if a[s] + a[e] <= W:
        s += 1
        e -= 1
    else:
        e -= 1
    vn+=1
print(vn,end="")