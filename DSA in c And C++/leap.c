#include<stdio.h>
void leap(int y){
    if(y%400==0||(y%4==0&&y%100!=0)){
        printf(" LEAP YEAR");   
    }
    else{
         printf(" NOT A LEAP YEAR");
    }
}
int main(){
    int y;
    printf(" enter the year\n");
    scanf("%d",&y);
    printf(" year=%d\n",y);
    leap(y);
}