#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>arr,int i,int key){
    if(i==arr.size()){
        return -1;
    }
    else if(arr[i]==key){
        return i;
    }
    return linear_search(arr,i+1,key);
}
int Binary_search(vector<int>arr,int l,int r,int key){

    int mid=(l+r)/2;
    if(l>r){
     return -1;
    }
    else if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
         return Binary_search(arr,l,mid-1,key);
    }
       return Binary_search(arr,mid+1,r,key);
}
int main(){
    cout<<"Enter the Size Of Array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the Element Of Array"<<endl;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Key to search"<<endl;
    int key;
    cin>>key;
    int ind=linear_search(arr,0,key);
    cout<<"Element is presnet at  "<<ind<<"  Index"<<endl;
    int ind1=Binary_search(arr,0,n-1,key);
    cout<<"Element is presnet at  "<<ind1<<"  Index"<<endl;
}