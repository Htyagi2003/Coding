#include<stdio.h>
void evodd(int d){
    switch(d){
        case 0:
        printf("even");
        break;
        default:
        printf("odd");
       
    }
}
int main(){
    int n,d;
    printf("enter the no.\n");
    scanf("%d",&n);
    d=n%2;
    evodd(d);
}