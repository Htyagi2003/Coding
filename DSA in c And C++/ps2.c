#include<stdio.h>
void triangle(int s1,int s2, int s3){
    if(s1!=s2&&s2!=s3&&s1!=s3){
        printf("scalence");
    }
    else if(s1==s2&&s2==s3){
        printf(" equilateral");
    }
    else{
         printf("isoscales ");
    }
}

int main(){
    int s1,s2,s3;
    printf("enter the three sides of triangle\n");
    scanf("%d%d%d",&s1,&s2,&s3);
    triangle(s1,s2,s3);


}