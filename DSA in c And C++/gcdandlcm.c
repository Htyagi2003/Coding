#include<stdio.h>
void gcd(int a,int b){
    int c=a>b?b:a;
    while(c>1){
        if(a%c==0&&b%c==0){
            printf("GCD= %d",c);
            break;
        }
        c--;
    }
}
void GCD(int a,int b){
    while(a%b){
        int c=a%b;
        a=b;
        b=c;
    }
     printf("\nGCD= %d",b);
}
int main(){
    gcd(0,5);
    GCD(0,5);
    int b=5%0;
    printf("%d",b);
}