// write a program to store a vector having 5 pairs take input from user by user defined function. call that function in to main by call by refrence and show the stored elements by another user defined method
#include <bits/stdc++.h>
using namespace std;
void input(vector<pair<int,string>> &h){
    int a;
    string b;
    for(int i=0;i<5;i++){
      cout<<"ENTER THE ROLL AND NUMBER"<<endl;
       cin>>a;
       cin>>b;
       h.push_back({a,b});

    }

}
void show(vector<pair<int,string>> &h){
    for (auto it :h){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
void show(vector<int>v[],int n){
for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
 void input1(vector<vector<int>>&lo,int r,int c){
    
    for(int i=0;i<r;i++){
        vector<int>k;
        for(int j=0;j<c;j++){
            int n;
            cin>>n;
          k.push_back(n);
        }
        lo.push_back(k);

    }

 }
 void show1(vector<vector<int>>v){
    for(auto it:v){
        for(auto lo:it){
            cout<<lo<<" ";
        }
        cout<<endl;
    }
 }
 vector<vector<int>> sum(vector<vector<int>>lo,vector<vector<int>>l1){
    vector<vector<int>>res;
    for(int i=0;i<lo.size();i++){
        vector<int>k;
        for(int j=0;j<l1.size();j++){
          k.push_back(lo[i][j]+l1[i][j]);
        }
        res.push_back(k);

    }
    return res;
 }



int main() {
    // vector<pair<int,string>>v1;
    // vector<int>v[4];
    vector<vector<int>>lo;
    vector<vector<int>>l1;
    vector<vector<int>>l2;
    // input(v);
    // show(v);
    // for(int i=0;i<4;i++){
    //     int k=i;
    //     for(int j=0;j<i+1;j++){
    //         v[i].emplace_back(k+1);
    //     }
    //     cout<<endl;
    input1(lo,3,3);
    input1(l1,3,3);
    show1(lo);
    show1(l1);
    l2=sum(lo,l1);
    show1(l2);
    

 }

