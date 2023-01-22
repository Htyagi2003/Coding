// this is program to count all the subsequence whose sum is k of an aaray whose sum is k
// this is bases on take and no take algorithim 
#include<bits/stdc++.h>
using namespace std;
int prints(int ind,int arr[],int n,int sum,int s){
    if(ind==n){

       if(sum==s){
        
        return 1;
       }
        // this is for the empty subsequence as well;
        //cout<<endl;
        else
        return 0;
    }
    //this is to takr the index value
    s+=arr[ind];
     int l=prints( ind+1,arr,n,sum,s);
    

    
    // this is to not take the value ;
    s-=arr[ind];
    int r=prints( ind+1,arr,n,sum,s);
       
    return l+r;

}
int main(){
    int n;
    cout<<"enter the size of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<" enter the elements of array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=2;
   cout<<prints(0,arr,n,sum,0)<<endl;
}