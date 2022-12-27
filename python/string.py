c="B4AID3"
s1=s2=output=''
for x in c:
    if x.isalpha():
        s1=s1+x
    else:
        s2=s2+x
for x in sorted(s1):
    output =output+x
for x in sorted(s2):
   output =output+x

print(output)
m="a4b3c2"
ou=''
for x in m:
    if x.isalpha():
        ou=ou+x
        pre=x
    else:
        ou=ou+pre*(int(x)-1)
print(ou)
y=6
z=lambda x:x*y
print(z(8))
m=(lambda x,y:x if x<y else y)
print(m(101*99,102*98))
print(123/100)