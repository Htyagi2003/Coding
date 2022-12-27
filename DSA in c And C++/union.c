#include<stdio.h>
int main(){
    int arr1[100],arr2[100],arr3[200];
    int n,m,i,j,k=0;
    printf(" HARSH TYAGI\n");
    printf("ROLL NO. = 2100320120072\n");
    printf("enter the elements of set 1:\n");
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);

    }
    printf("enter the elements of set 2:\n");
    scanf("%d ",&m);
    for(i=0;i<m;i++){
        scanf("%d",&arr2[i]);

    }
    for(i=0;i<n;i++){
        arr3[k]=arr1[i];
        k++;
    }
    for(i=0;i<n;i++){
       int f=0;
       for(j=0;j<m;j++){
        if(arr2[i]==arr3[j]){
            f=1;
        }
       }
        if(f==0){
            arr3[k]=arr2[i];
            k++;
        }
       

    }
    printf(" This is the union of set1 & set 2:\n");
    for(i=0;i<k;i++){
        printf("%d ",arr3[i]);

    }

}