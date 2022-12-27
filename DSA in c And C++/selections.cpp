#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int k=0;k<n-1;k++){
        int min=arr[k];
        int mini=k;
    for(int i=k+1;i<n;i++){
        if(arr[i]<min){ 
            min=arr[i];
            mini=i;
        }
    }
    int temp=arr[k];
        arr[k]=arr[mini];
        arr[mini]=temp ;
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
selectionsort(arr,n);
} 

