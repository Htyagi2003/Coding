#include<stdio.h>


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        
    }
    int s=0;
    for(int i=0;i<5;i++){
        s=s+arr[i];
    }
    if((s/5)>100){
        printf("Invalid Score\n");
    }
        else if(s/5>90){
            printf("A");
        }
        else if(((s/5)>80)&&((s/5)<=90)){
            printf("B");
        }
           else if(((s/5)>60)&&((s/5)<=79)){
            printf("C");
        }
         else{
             printf("D");
         }
    
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c;
    scanf("%c",&c);
    if(c>=97 && c<=122 ){
        printf("Lowercase\n");
    }
    else if(c>=65 && c<=90){
        printf("Uppercase\n");
        
    }
    else if(c>=48 && c<=57){
        printf("Number\n");
        
    }
    else{
        printf("SpecialCharacter\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int main(){
    int dd,mm,yy,leap;
    int tod,mday;
    int months[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    printf("enter");
    scanf("%d %d %d",&dd,&mm,&yy);
    if(m>2){
        leap=(yy)/4-(yy)100+(yy)/400;
    }
    else{
        leap=(yy-1)/4-(yy-1)100+(yy-1)/400;
    }
    mday=months[mm-1];
    tod=(yy-1)*365+leap+mday+dd;
    switch (tod%7)
    {
    case 0:
        printf("SUNDAY");
        break;
        case 1:
        printf("MONDAY");
        break;
        case 2:
        printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THRUSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURADAY");
        break;
    }
}