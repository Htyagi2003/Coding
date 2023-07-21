#include<bits/stdc++.h>
using namespace std;
int main(){

   cout<<"Enter the Number of processes:"<<endl;
   int p;
   cin>>p;
   cout<<"Enter the size of processes:"<<endl;
   vector<int>v;
   for(int i=0;i<p;i++){
      int a;
      cin>>a;
      v.push_back(a);
   }
   cout<<"Enter the Number of patition:"<<endl;
   int part;
   cin>>part;
   vector<int>v1;
   cout<<"Enter the size of partions:"<<endl;
   for(int i=0;i<part;i++){
      int a;
      cin>>a;
      v1.push_back(a);
   }
   cout<<"HI"<<endl;
   vector<int>v2(p);
//    for(int i=0;i<p;i++){
//     v2[i]=-1;
//    }
   int freg=0;
   for(int i=0;i<p;i++){
    for(int j=0;j<part;j++){
        if(v1[j]>=v[i]){
            v2[i]=j;
            freg+=(v1[j]-v[i]);
           break;
        }
    }
   }
   cout<<freg<<endl;



    return 0;
}