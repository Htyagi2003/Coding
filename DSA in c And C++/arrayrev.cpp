#include<iostream>
using namespace std;
int main(){
    int arr[10]; int n,a;
    cin>>n;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    int v=n-1;
     for(int i =0;i<n/2;i++){
        //int v=n-1;
          a=arr[i];
        arr[i]=arr[v];
        arr[v]=a;
        v=v-1;
       


     }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       
    }
}