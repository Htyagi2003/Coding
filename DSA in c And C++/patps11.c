#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char s=' ';
    
    for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        printf("%d",j);
       }

       for(int k=1;k<=(2*n-2*i);k++){
        printf("%c",' ');
       }
       int b=i;
        for(int k=1;k<=i;k++){
            printf("%d",b);
            b--;
        }
        printf("\n");

    }


}