#include<iostream>
using namespace std;
int linearsearch(int arr[] ,int n ,int x ){
    int count=0;
   for(int i=0;i<n;i++) 
   { 
    if(x==arr[i]){
       count++;
    }
   }
   return count;
    
}
int main(){

int n; int arr[100]; int x;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter the array:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
cout<<"enter the element to be found:"<<endl;
cin>>x;
int a=linearsearch(arr,n,x);
if(a){
cout<<"value reapeat "<<a<<" times"<<endl;}
else{
    cout<<"value not found";
}
return 0;
}