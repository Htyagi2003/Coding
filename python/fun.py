def wish():
    print("HELLO WOLRD");
wish()
def calc(a,b):
    sum=a+b
    sub=a-b
    mul=a*b
    div=a/b
    return sum,sub,mul,div
print(calc(a=100,b=5)) #key word parameter   #order is not importnat number is importamt.
#    printcalc(b=100,5)) #invalid keyword ke baad positional nhi kr skte.
# (50,a=50) not valid double assignment
# def sum(*n):
#     print(a+b)
    
# sum(10)
#write a program to sum of given n numbers
def sum(*a):#a is tupple here
    s=0
    for i in a:
        s=s+i
    print(s)
sum(10,20,40)
#order wise mo problem
def sum(name,*n):
    res=0
    for x in n:
        res=res+x
    print("the sum by",name,":",res)

sum("NAMAN",10)
sum(name='a')
# sum(10,name='a')// invalid
# def dis(**kwargs):# kwarsg is in dictionary
def f(arg1,arg2,arg3=4,arg4=8):
    print(arg1,arg2,arg3,arg4)
f(3,2,5,5)
f(25,50,arg4=100)
f(arg4=2,arg1=3,arg2=4)
# f() #error missing arguemmnet
# f(arg4=6,2,3)# after keyword
# types of variable IN FUMCTION
# 1->global 2.-> local
#recursive function
#a function that call nitself is called erecursive function.
# advantages 1.imporove readability and reduce length iof coide
#2.we can solve complex problem very easily like tower of hanoi
def fact(a):
    if(a==0):
        return 1
    else:
        return a*fact(a-1)
    
print(fact(4))
#lambda -> withoot name namless func 2. instannt use. 3.only one time usage
s=lambda n:n*n
print(s(4))
# lambda input:expression
b=lambda a,b: a+b
print(b(2,3))
# a func can accept as arg of another func then lambda func is best choice
g=lambda a,b:a if a>b else b
print(g(3,7))
# filter()
# map()
# reduce()
l=[1,2,3,4,5,6,7,8,9,0]
l1=list(filter(lambda x:x%2==0,l))
print(l1)
l4=[2,3,4]
i=lambda k:k*k
for k in l4:
    print(i(k))
def f1(f2):
    return lambda x:f2(x)+5
def f2(x):
    return x+5
a=f1(f2)
print(a(5))
b=[1,2,3]
a=map(str,b)
print(list(a))
from functools import reduce
l8=[2,3,4]
sum1=reduce(lambda x,y:x+y,l8,10)
print(sum1)
x=['ac','cd']
print(len(list(map(list,x))))
import calc as c
p=c.area(5)
print(p)
p=c.multiplication(5,9)
print(p)
p=c.division(5,5)
print(p)