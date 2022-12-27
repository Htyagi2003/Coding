#include<stdio.h>
int main(){
    int n;
    char c=' ';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%c",c);
        }
        int b=i;
        for(int k=1;k<=i;k++){
            printf("%d",b);
            b--;
        }
       int h=2;
       for(int d=1;d<=i-1;d++){
        printf("%d",h);
        h++;
       }
       printf("\n");


    }
}