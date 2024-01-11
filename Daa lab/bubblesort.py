l=[]
print("enter the Size of list ")
size=int(input())
print("enter the list element ")
for i in range(size):
    value=int(input())
    l.append(value)
print(l)
swap=0
for i in range(size):
    for j in range(size-i-1):
        if(l[j]>l[j+1]):
            l[j],l[j+1]=l[j+1],l[j]
            swap=swap+1
    if swap==0:
        print("breaked")
        break

print(l)