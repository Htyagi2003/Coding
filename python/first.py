
t=(10,30,40)
print(id(t))
print(id(tuple(sorted(t ,reverse=True))))
s=set("abes")
print(s)
s={1,23,6}
u={2,3,1,"v"}
print(s.union(u))
#print(s.pop())
print(t)
#if we want to represent a group of object a key value pair we will go for dictioneries
d={}
print(type(d))
d["gaurav"]=100
d["ram"]=100
d["harsh"]=100
d["himanshu"]=100
d["lavish"]=100
d["harsh"]=200
print(d)
#if we will try to in sert a duplicate key it will  not give error but old value is replaced by new value
print(d["harsh"])
#print(d["balwa"])
print(d.get(106,0))#if specified key is not available we can default value
d.popitem()
print(d)
d.setdefault(106,"ravi")
print(d)
#setdefalut-> if key is available then it returns value if not then it adds coresponding k,v in dict.
#write a program to take dictionary from the keyborad print sum of values.
# v={}
# s=0
# for i in range(3):
#     key= eval(input("Enter key: "))
#     value = eval(input("Enter value: "))
#     v[key] =value
#     s=s+value

# print(v)
# print(s)
#write a program to return no. of occurences of each letter present in given string;
# word=input("enter some word:")
# g={}
# for x in word:
#     g[x]=g.get(x,0)+1
# print((sorted(g.items())))
# for k,v in sorted(g.items()):
#     print("{}  occured  {} times".format(k,v))
#wap to count no. of occurence of vowel in given string
# word2=input("enter some word:")
# d={}
# for x in word2:
#     if x=='a'or x=='e'or x=='o'or x=='u' or x=='i':
#         d[i]=d.get(i,0)+1
# print(sorted(d.items()))
# #print(" no. of vowel in a string = {}".format(c))
# for m,n in sorted(d.items()):
#     print("{}  occured  {} times".format(m,n))

u =int(input("enter no. student:"))
f={}
for i in range(u):
    v=(input("enter the name of students:"))
    mark=int(input("enter the students marks:"))
    f[v]=mark
print(f)
option=1
while option:
    j=input("enter the name of student:")
    marks=f.get(j,-1)
    if(marks==-1):
        print("students not found //")
    else:
        print(" the marks of {} are :{}".format(j,marks))
    option=int(input("press 1 for further searching else 0:"))
