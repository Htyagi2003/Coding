uiy = int(input())

def yuytrree(n):
    if n == 1: return "one"
    elif n == 2: return "two"
    elif n == 3: return "thr"
    elif n == 4: return "fou"
    elif n == 5: return "fiv"
    elif n == 6: return "six"
    elif n == 7: return "sev"
    elif n == 8: return "eig"
    elif n == 9: return "nin"
    elif n == 0: return "zer"

def s(s):
    nhjhjghgh = int(s)
    if nhjhjghgh == 0: return 0
    elif nhjhjghgh % 9 == 0: return 9
    else: return nhjhjghgh % 9

for i in range(uiy):
    a = [x for x in input().split()]
    n = a[0]
    name = a[1]
    d1 = 0

    if "." in n:
        d1 = n.index('.')

    d2 = len(n)
    l = d2 - d1
    f = 0

    if n[0] == '-':
        f = 1
        n = n[1:]

    try:
        n = float(n)
        r = True
    except:
        r = False

    if r == False:
        if i < uiy - 1:
            print("Invalid")
        else:
            print("Invalid", end="")
    else:
        c = format(n, f".{l}e").split('e')
        nhjhjghgh = c[0].split('.')
        k = int(c[1])

        if f == 1:
            re = "-"
        else:
            re = ""

        re += yuytrree(int(nhjhjghgh[0])) + "." + yuytrree(s(nhjhjghgh[1])) + "e"

        if k > 0:
            re += '+'
        elif k < 0:
            re += '-'

        re += yuytrree(abs(int(c[1]))) + "@"

        if k % 2 != 0:
            for x in range(0, len(name), 2):
                re += name[x]
        else:
            for x in range(1, len(name), 2):
                re += name[x]

        if i < uiy - 1:
            print(re)
        else:
            print(re, end="")
