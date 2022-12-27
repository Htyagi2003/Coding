#include<stdio.h>
int main(){
    int arr1[100],arr2[100],arr3[200];
    int n,m,i,j,k=0;
    printf("NAME = HARSH TYAGI \n");
    printf("ROLL NO. = 2100320120072\n");
    printf("enter the cardinality of set 1:\n");
    scanf("%d",&n);
    printf("enter the elements of set 1:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr1[i]);

    }
    printf("enter the cardinality of set 2:\n");
    scanf("%d",&m);
    printf("enter the elements of set 2:\n");
    for(j=0;j<m;j++){
        scanf("%d",&arr2[j]);

    }
    
        for(i=0,j=0;j<m&&j<n;i++,j++){
            int flag=0;
            if(arr1[i]<arr2[j]){
                arr3[k]=arr1[i];
                flag=1; 

            }
              if(flag==0)
              {
                arr3[k]=arr2[j]; 
            
            }
            k++;
                 
        }
    printf("%d",k);
    printf(" This is the merging of set1 & set 2:\n");
    for(i=0;i<k;i++){
        printf("%d ",arr3[i]);

    }

}