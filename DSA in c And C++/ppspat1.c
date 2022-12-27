#include<stdio.h>
int main(){
    int i=1,j;
    int n,k;
    scanf("%d",&n);
    while(i<=n){
        k=i; j=1;
        while(j<=i){
            printf("%d",k);
            k++;
            j++;
        } 
        i++;
        printf("\n");
    }
    return 0;
}
