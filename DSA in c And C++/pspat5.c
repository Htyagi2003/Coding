#include<stdio.h>
int main(){
    int j;
    int n;
    char k;
     int i=1;
    scanf("%d",&n);
    while(i<=n){
         j=1;
          k='A'-i+n;
        while(j<=i){
            printf("%c",k);
            j++;
            k++;
        }
        i++;
        printf("\n");
       
    }
    return 0;
}
