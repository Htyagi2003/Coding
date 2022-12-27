#include<stdio.h>
#include"header.h"
int main()
{
   int a=10;
   int b=8;
    int p;
    p=multi(a,b);
    printf("multi=%d\n",p);
    p=sum(a,b);
    printf("sum=%d\n",p);
    p=minus(a,b);
    printf("minus=%d\n",p);
    p=divide(a,b);
    printf("divide=%d\n",p);
    return 0;
}