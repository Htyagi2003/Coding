#include<stdio.h>
int main(){
    int m,n;
    int arr1[10];
    int arr2[10];
    printf("NAME = Harsh Tyagi \n");
    printf("ROLL NO. = 2100320120072\n");
    printf("enter the size of set1:\n");
    scanf("%d",&n);
    printf("enter the element of set1:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of set2:\n");
    scanf("%d",&m);
    printf("enter the element of set2:\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    } 
    printf("cartesian product of set1 and set2:\n");
    printf("{ ");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("(%d,%d)",arr1[i],arr2[j]);
        }
    }
     printf(" }");

}