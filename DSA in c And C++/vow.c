
// #include<stdio.h>
// void vow(char y){
//     switch(y)
//     {
//      case 'A':
//        printf("its a vowel");
//         break;
//      case 'E':
//        printf("its a vowel");
//         break;
//          case 'O':
//        printf("its a vowel");
//         break;
//          case 'U':
//        printf("its a vowel");
//         break;
//          case 'I':
//        printf("its a vowel");
//         break;
//          case 'a':
//        printf("its a vowel");
//         break;
//          case 'e':
//        printf("its a vowel");
//         break;
//          case 'o':
//        printf("its a vowel");
//         break;
//          case 'u':
//        printf("its a vowel");
//         break;
//          case 'i':
//        printf("its a vowel");
//         break;
//     default:
//     printf("its a consonant");
//         break;
//     }
    
// }
// int main(){
//     char y;
//     printf(" enter the character\n");
//     scanf("%c",&y);
//     printf(" character=%c\n",y);
//     vow(y);
// }



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int ans;
  if(n==1){
    ans=a;
  }
  if(n==2){
      ans=b;
  }
  if(n==3){
      ans=c;
  }
  else{
      ans=find_nth_term(n-3, a, b, c)+find_nth_term(n-2, a, b, c)+find_nth_term(n-1, a, b, c);
  }
  return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
