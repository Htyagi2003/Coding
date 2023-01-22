// this is program to print all the subsequence of an aaray whose sum is k
// this is bases on take and no take algorithim 
#include<bits/stdc++.h>
using namespace std;
void prints(int ind,vector<int>&ds,int arr[],int n,int sum,int s){
    if(ind==n){

       if(sum==s){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        
       }
        // this is for the empty subsequence as well;
        //cout<<endl;
        
        return;
    }
    //this is to takr the index value
    ds.push_back(arr[ind]);
    s+=arr[ind];
    prints( ind+1,ds,arr,n,sum,s);
    

    ds.pop_back();
    // this is to not take the value ;
    s-=arr[ind];
    prints( ind+1,ds,arr,n,sum,s);
       
    

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
    vector<int>ds;
    int sum=2;
    prints(0,ds,arr,n,sum,0);
}