#include<stdio.h>
void print(int n){
    int temp=n;
    int i=-5;
    harsh:
    printf("%d ",temp);
    temp=temp+i;
    if(temp<=0){
        i=5;
    }
    if(temp<=n){
        goto harsh;
    }
}
int main(){
    int n;
    printf("enter the element\n");
    scanf("%d",&n);
    print(n);
    return 0;
}