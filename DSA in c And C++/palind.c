#include<stdio.h>
int palindrome(int num){
int temp=num;
int r=0;
while(temp>0){
    r=r*10+(temp%10);
    temp/=10;
}
return (r==num);
}
int palind(int num){
int r=0;
while(num>0){
    r=r*10+(num%10);
    num/=10;
}
return r;
}
int main(){
    int num;
    printf("enter the no. \n");
    scanf("%d",&num);
    if (palindrome(num))
    {
    printf("palindrome\n");
    }
    else{
        printf("not\n");
    }
    if(palind(num)==num){
        printf("palindrome\n");
    }
    else{
        printf("not palindrome\n");
    }

}