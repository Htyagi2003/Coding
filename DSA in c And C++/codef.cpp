#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%5==0){
        cout<<n/5<<endl;
    }
    else{
        cout<<(n/5)+1<<endl;
    }
}
int main(){
    int arr1[100];
    int arr2[100];
    int arr[200];
    int n,k;
    int r=0;
    int p=0;
    int t=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            arr1[r]=i;
            r++;
        }
        else{
            arr2[p]=i;
            p++;
        }
    }
    for(int j=0;j<p;j++){
        arr[t]=arr2[j];
        t++;

    }
    
    for(int  j=0;j<r;j++){
        arr[t]=arr1[j];
        t++;

    }
    // for(int j=0;j<n;j++){
    //     cout<<arr[j]<<" ";
    // }
    cout<<arr[k-1]<<endl;

}