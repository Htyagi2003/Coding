#include<stdio.h>
#include<math.h>
int main(){
    int n,arr[10];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the element of array\n");
    {
        scanf("%d",&arr[i]);
    }
    int count=pow(2,n);
    printf("This Is The Power Set of set arr \n");
    for (int i = 0; i < count; i++)
    {   printf("{ ");
        for ( int j = 0; j < n; j++)
        {
           if((i&(1<<j))>0){
            printf("%d,",arr[j]);
           }
    
        }
        printf("\b");
        printf(" }");
        printf("\n");
    }
    
}
 