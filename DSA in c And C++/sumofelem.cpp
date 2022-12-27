#include <bits/stdc++.h>

using namespace std;
int sumofarray(int arr[],int n)
{   int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    cout<<sumofarray(arr,n)<<endl;    
}