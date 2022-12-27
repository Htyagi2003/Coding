#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=n;i>0;i--){
        f=f*i;
    }
    return f;
}
int main(){
    int n,f;
    printf("enter the element\n");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
}