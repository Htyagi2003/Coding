#include<stdio.h>
int main(){
    int j;
    int n;
    char k;
     k='A';
     int i=1;
    scanf("%d",&n);
    while(i<=n){
         j=1;
        while(j<=i){
            printf("%c",k);
            j++;
        }
        i++;
        k++;
        printf("\n");
       
    }
    return 0;
}
