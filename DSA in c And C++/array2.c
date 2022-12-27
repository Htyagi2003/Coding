#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,k,max=0,t=0;
    printf("NAME = HARSH TYAGI \n");
    printf("ROLL NO. = 2100320120072\n");
    printf("enter the no. elements of array:\n");
    scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    printf("enter the element to find:\n");
    scanf("%d",&k);
    for(j=0;j<n;j++){
    if(k==arr[j]){
       printf(" element at %d index\n",j);

    }
    else
    printf(" element is not present\n");

    }
     return 0;

}