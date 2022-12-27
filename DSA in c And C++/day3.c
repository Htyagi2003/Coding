#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=n;i>0;i--){
    f=f*i;
    }
    return f;
}
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    if(n==1){
        printf("%d",n);
    }
    else{
    for(int k=1;k<=n;k++){
    sum=sum+fact(k)/k;
}
printf("%d",sum);
    }

}