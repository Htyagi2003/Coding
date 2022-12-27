#include<stdio.h>
void insert(int arr[],int n,int x,int i){
    int j;
    arr[i-1]=x;
    printf("\narray with insertion\n");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }

}
int main(){
    int arr[100];
    int n,j,x,i;
    printf("enter the size ,element,position\n");
    scanf("%d%d%d",&n,&x,&i);
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    if(i>n){
        printf("invalid position\n");

    }
    printf("array without insertion\n");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    insert(arr,n,x,i);

}