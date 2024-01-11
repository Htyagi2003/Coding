from collections import defaultdict

def ps(N, start, connections):
    ghou = defaultdict(list)
    tfgf = defaultdict(int)

    for i in range(N - 1):
        c1, c2, g, tx = connections[i]
        ghou[c1].append((-1 * g, tx, c2))
        tfgf[c2] = tx

    rtyu = []

    def dfs(city):
        rtyu.append(city)
        for n in sorted(ghou[city]):
            dfs(n[2])
            rtyu.append(city)
    
    dfs(start)

    tfgfd = 0
    for c in rtyu[1:]:
        tfgfd += tfgf[c]

    return rtyu, tfgfd

N = int(input())
cons = []

for _ in range(N-1):
    l = input()
    ls = l.split()
    cons.append((ls[0], ls[1], int(ls[2]), int(ls[3])))

ans, t = ps(N, cons[0][0], cons)

print("-".join(ans))
print(t, end="")
