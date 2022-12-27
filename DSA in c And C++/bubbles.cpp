#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int k=0;k<n-1;k++){
    for(int i=0;i<n-k-1;i++){
        if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp ;
        }
    }
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
bubblesort(arr,n);
} 

