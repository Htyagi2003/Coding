#include<stdio.h>
void findres(int d){
    if(d<0){
        printf("freezing point");
    }
     else if(d<10){
         printf("very cold");
    }
    else if(d<20){
         printf("cold");
    }
    else if(d<30){
         printf("normal");
    }
    else if(d<40){
         printf("hot");
    }
    else{
         printf("so hot");
    }
}
int main(){
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    findres(n);
}