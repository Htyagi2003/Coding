#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n ,m;
     char c;
    scanf("%d",&n);
    fflush(stdin);
    scanf("%d",&m);
    fflush(stdin);
    scanf("%c",&c);
    fflush(stdin);
     switch(c){
         case '+':
             printf("%d",n+m);
             break;
         case '/':
             printf("%d",n/m);
             break;
         case '-':
             printf("%d",n-m);
             break;
          case '*':
             printf("%d",n*m);
             break;
         case '%':
             printf("%d",n%m);
             break;
     }
    return 0;
}