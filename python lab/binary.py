def binary(l,ele,low,high):
    while(low<=high):
        mid=(high+low)//2
        if(l[mid]==ele):
            return mid
        elif(l[mid]>ele):
            return binary(l,ele,low,mid-1)
        return binary(l,ele,mid+1,high)
l=[1,2,3,4,5,6,7,8]
print("Element if found at {} index".format(binary(l,3,0,len(l)-1)))