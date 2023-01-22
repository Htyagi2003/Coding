// this is program to print the firstwhose sum is k subsequence of an aaray
// this is bases on take and no take algorithim 
#include<bits/stdc++.h>
using namespace std;
bool prints(int ind,vector<int>&ds,int arr[],int n,int sum,int s){
    if(ind==n){

       if(sum==s){
        for(auto it:ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return true;
       }
        // this is for the empty subsequence as well;
        //cout<<endl;
        else
        return false;
    }
    //this is to takr the index value
    ds.push_back(arr[ind]);
    s+=arr[ind];
    if(prints( ind+1,ds,arr,n,sum,s)==true){
        return true;
    };

    ds.pop_back();
    // this is to not take the value ;
    s-=arr[ind];
    if(prints( ind+1,ds,arr,n,sum,s)==true){
        return true;
    }
    return false;

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