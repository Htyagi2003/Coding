#include<stdio.h>
void insertsort(int arr[],int count,int value){
    int temp=count;
    arr[temp]=value;
     while(temp>0){
        if(arr[temp]>arr[temp-1]){
            break;
        }
        else{
            int t=arr[temp];
            arr[temp]=arr[temp-1];
            arr[temp-1]=t;

        }
        temp--;
     }
     for(int i=0;i<=count;i++){
        printf("%d  ",arr[i]);
     }
}
int main(){
    int arr[15]={1,2,3,4,5,6,7,8,9,10};
     insertsort(arr,10,2);
}