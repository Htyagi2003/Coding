#include<stdio.h>
int main(){
    int arr[100];
    int n,i,j,k,max=0;
    printf("NAME = HARSH TYAGI \n");
    printf("ROLL NO. = 2100320120072\n");
    printf("enter the elements of array:\n");
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);

    }
    max=arr[0];
    for(j=1;j<n;j++){
    if(max<arr[j]){
        max=arr[j];    
    }
    }
    printf(" maximum element is = %d",max);
     return 0;

}