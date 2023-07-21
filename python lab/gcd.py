def gcd(a,b):
    if a==0:
        return b
    if b==0:
        return a
    if(a==b):
        return a
    if(a>b):
        return gcd(a%b,b)
    else:
        return gcd(a,b%a)
print(gcd(12,36))
import math as m
print(m.gcd(0,36))

#euclideian
def gcdeuc(a,b):
    if a==0:
        return b
    if b==0:
        return a
    if(a==b):
        return a
    if(a>b):
        return gcd(a-b,b)
    else:
        return gcd(a,b-a)
print(gcdeuc(0,36))
#program by loop
def gcdloop(a,b):
    gcd=1
    if a==0:
        return b
    if b==0:
        return a
    if(a==b):
        return a
    for i in range(1,min(a,b)+1):
        if( (a%i==0) and (b%i==0)):
            gcd=i
    return gcd
print(gcdloop(0,12))