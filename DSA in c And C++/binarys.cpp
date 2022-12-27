#include<iostream>
using namespace std;
int binarysearch(int arr[] ,int n ,int x ){
    int start=0;
    int end=n-1;

   while(start<=end){
    int mid =(start+end)/2;
    if(x==arr[mid]){
        return mid;
    }
    else if (x<arr[mid]){
        end=mid-1;
    }
    else {
       start=mid+1;
    }
   }
   return 0;
    
}
int main(){
int n; int arr[100]; int x;
cout<<"enter the size of array:"<<endl;
cin>>n;
cout<<"enter the array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<"enter the element to be found:"<<endl;
cin>>x;
int a=binarysearch(arr,n,x);
if(a){
cout<<"value is at "<<a<<" index"<<endl;
}
else{
    cout<<"value not found in array:";
}
return 0;
}