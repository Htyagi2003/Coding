#include <bits/stdc++.h>
using namespace std;

int main(){
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        int ind=upper_bound(arr+i+1,arr+size,arr[i]+n)-arr-1;
        if(abs(arr[ind]-arr[i])==n)
        return 1;
    
    }
    return -1;



    sort(arr,arr+size);
    int l=0;
    int r=1;
    bool ans=false;
    while(l<size && r<size){
    int diff=arr[r]-arr[l];
    if(diff==n and l!=r){
    ans=true;
    break;
    }
    else if(diff>n)
    l++;
    else
    r++;
    }
    return ans;
    



    sort(arr,arr+size);
    bool ans=false;
    for(int i=0;i<size;i++){
    int ind=upper_bound(arr+i+1,arr+size,arr[i]+n)-arr-1;
    if(arr[ind]-arr[i]==n and ind!=i){
        ans=true;
        break;
    }
    }
    return ans;

       
}