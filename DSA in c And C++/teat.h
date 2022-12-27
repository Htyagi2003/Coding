#include<stdio.h>
void cordinate(int a,int b){
    if(a>0&&b>0){
        printf(" FIRST QUAD");
    }
    else if(a>0&&b<0){
        printf("FORUTH QUAD");
    }else if(a<0&&b>0){
        printf(" SECOND QUAD");
    }else if(a<0&&b<0){
        printf(" THIRD  QUAD");
    }
}
int main(){
    int a,b;
    printf(" enter the two points a,b\n");
    scanf("%d%d",&a,&b);
    printf(" a=%d b=%d\n",a,b);
    cordinate(a,b);

}