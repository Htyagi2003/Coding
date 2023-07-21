# To Find The Max In List
l=[]
n=int(input("enter of size of list--"))
for i in range (0,n):
    a=int(input())
    l.append(a)

print("max element--",max(l))
maxi=l[0]
for i in l:
    if i>maxi:
        maxi=i
print("max element--",maxi)
# Linear Search

ele=int(input("element to be found--"))
for i in range(0,len(l)):
    if l[i]==ele:
        print("element is found at  {} index".format(i))
        break