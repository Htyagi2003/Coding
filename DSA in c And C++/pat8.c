#include<stdio.h>
int main(){
    int i=1;
    int n;
    
    scanf("%d",&n);
    while(i<=n){
        int j=1;
        while(j<=n-i){
          printf("%c",' ');
          j++;

        }
        int k=1;
        while(k<=i){
            printf("%c",'*');
            k++;
        }
        int b=i-1;
        int c=2*i-2;
        while(b>=1){
            printf("%c",'*');
            c=c-1;
            b--;
        }
        printf("\n");
        i++;


    }
}