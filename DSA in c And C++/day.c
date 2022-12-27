#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int dd,mm,yy,leap;
    int tod,mday;
    int months[]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    scanf("%d %d %d",&dd,&mm,&yy);
    int dayarr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(mm>2){
        leap=(yy)/4-(yy)/100+(yy)/400;
    }
    else{
        leap=(yy-1)/4-(yy-1)/100+(yy-1)/400;
    }
    mday=months[mm-1];
    if(dd>dayarr[mm-1]){
        printf("Incorrect Date");
    }
    else{
    tod=(yy-1)*365+leap+mday+dd;
    switch (tod%7)
    {
        case 0:
        printf("Sunday");
        break;
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
    }
}
    return 0;
}