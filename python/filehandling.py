import os
import sys
fname=input("Enter the file name ")
if os.path.isfile(fname):
    print("file exist",fname)
    f=open(fname,'r')
else:
    print("file not exist")
    sys.exit
lcount=wcount=ccount=0
for line in f:
    lcount=lcount+1 
    ccount=ccount+len(line)
    words=line.split()
    wcount=wcount+len(words)
print("no. of lines",lcount)
print("no. of words",wcount)
print("no. of character",ccount)
    