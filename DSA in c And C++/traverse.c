#include<stdio.h>
int main(){
   int arr[100];
   int n,i;
   printf("enter the size of array");

    scanf("%d",&n);
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
    printf("%d   ",arr[i]);
   }

}