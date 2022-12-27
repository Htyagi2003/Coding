#include<stdio.h>
float mean(int arr[],int s){
    float sum=0.00;
    for (int i = 0; i < s; i++)
    {
        sum+=arr[i];
    }
    printf("THIS IS THE MEAN:\n");
    return sum/s;
    
}
int median(int arr[],int s){
    int temp,i,j;
    float med;
    for(i=0;i<s;i++){
        for ( j = 0; j < s-1-i; j++)
        {
          if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
          }
        }
        
    }
    if(s%2==0){
        med=arr[((s/2+((s/2)+1)))/2-1];
    }

    else{
        med=arr[(s+1)/2-1];
    }
    printf("THIS IS THE MEDIAN:\n");
    return med;

}
int main(){
    int s;
    int arr[10];
    printf("enter the size of array\n");
    scanf("%d",&s);
    printf("enter the element of array\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    float m=mean(arr,s);
    printf("%f\n",m);
    int mi=median(arr,s);
    printf("%d",mi);

}