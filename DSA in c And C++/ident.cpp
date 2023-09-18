#include<bits/stdc++.h>
using namespace std;
 int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    int n=s.length();
    if((s[0]>=34 and s[0]<=64)or(s[n-1]>=34 and s[n-1]<=64)){
        cout<<"Invalid String";
    }
    else{
        cout<<"Valid";
    }
 }