#include<iostream>
using namespace std;
int traverse(int arr[],int n){
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){ 
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]%2!=0){
            count2++;
        }
        else {
            count3++;
        }
        
    }
    //cout<<count1<<endl<<count2<<endl<<count3<<endl;
    ;
    }if(count1>count2){
        if(count1>count3){
            return 0;
        }
    }if(count2>count3){
        if(count2>count1){
            return 1;
        }
    }
    else{
        return 2
}
// a function can return at most one vale ....so now the
int main(){
    int arr[10]; int n,a;
    cin>>n;
    for(int i=0;i<n;i++){ 
        cin>>arr[i];

}
int s=traverse(arr,n);
cout<<s;
return 0;
}