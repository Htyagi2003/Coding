#include<stdio.h>
int peakloc(int a[], int n)
    {
        if(n <= 0)
        return -1;
        int i, max_i = 0;
        int max = a[0];
        for(i = 1; i < n; ++i){
            if(a[i] > max){
                max = a[i];
                max_i = i;
            }
        }
        return max_i;
    }
int main()
{
   int arr[100];
   int n;
   printf("HARSH TYAGI\n");
   printf("ROLL NO.=2100320120072\n");
   printf("enter the size of an array\n");
   scanf("%d",&n);
   printf("enter the elements of array:\n");
   for(int i=0;i<n;i++){
   scanf("%d",&arr[i]);}
   int loc;
   loc=peakloc(arr,n);
   printf("%d",loc);
   return 0;
}