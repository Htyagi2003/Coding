#include<iostream>
using namespace std;
int main(){

int count=0;
int a,b;
cin>>a>>b;
int c =a^b;

        while(c>0){
             int n=c&1;
            if(n==1){
                count++;
            }
            //cout<<count;
            c=c>>1;

        }
         cout<<count;
}