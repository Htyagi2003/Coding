#include<stdio.h>
int compliment(int arr1[],int arr2[],int arr3[],int size1,int size2){
   int k=0;
   int flag=0;
   for(int i=0;i<size1;i++){
    for(int j=0;j<size2;j++){
        if(arr2[j]==arr1[i]){
            flag=1;
        }
        if(flag==0){
            arr3[k]=arr1[i];
            k++;
            break;
        }
    }
   }
    for(int i=0;i<k;i++){
        printf("%d ",arr3[i]);
    }


}
int main(){
    int arr1[10];
    int arr2[10];
    int arr3[10];
    int size1,size2;
    printf("ENTER THE SIZE OF UNIversal:\n");
    scanf("%d",&size1);
    printf("ENTER THE ELEMENT OF UNIversal:\n");
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("ENTER THE SIZE OF A:\n");
    scanf("%d",&size2);
    printf("ENTER THE ELEMENT OF A:\n");
    for(int i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    compliment(arr1,arr2,arr3,size1,size2);
}