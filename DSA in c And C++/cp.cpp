#include <bits/stdc++.h>
using namespace std;
int print(int n){
    if(n<1){
        return 1;
    }
    return n*print(n-1);
    
    
}
void swapi(vector<int>&v,int l,int r){
    if(l==r){
        return;
    }
 swap(v[l],v[r]);
 swapi(v,++l,--r);
}
int fibo(int n){
    if(n<=1){
        return n;
    }
    // else if(n==1||n==2){
    //     return 1;
    // }
    
    return fibo(n-1)+fibo(n-2);
    
}
int main() {
    vector<int>v={1,2,3,4,5};
    swapi(v,0,v.size()-1);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<print(5)<<endl;;
    cout<<fibo(5)<<endl;
}
