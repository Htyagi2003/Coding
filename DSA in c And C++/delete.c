#include<stdio.h>
void delete(int arr[],int v,int n){
    int flag=0;
    for(int i=0;i<n;i++){
        if(arr[i]==v){
           flag=1;

        }
        if(i==n-1){
            break;
        }
        if(flag==1){
            arr[i]=arr[i+1];
        }
        
 
    }
}
 int main(){
        int n,v;
        
        int arr[10]={1,2,3,4,5,6,7,8,0,10};
         delete(arr,8,10);
         for(int i=0;i<9;i++){
            printf("%d   ",arr[i]);
         }

        }


