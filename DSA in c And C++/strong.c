// #include<stdio.h>
// int fact(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//     int temp=i;
//     int st=0;
//     int r;
//     while(temp>0){
//         r=temp%10;
//         st=st+fact(r);
//         temp/=10;


//     }
//     if(st==i){
//       printf("%d ",i);
//     }
//     }
// }

#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int sum=0;
    int a=n;
    for(int i=0;i<n/2;i++){
        if(a%i==0){
            sum+=i;
        }
        if(sum==n){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
