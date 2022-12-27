#include<stdio.h>
#define size 10
int top,stack[size];
void initialise(){
    top=-1;
}
int main(){
    int c;
    initialise();
    do{
    printf("1.....push\n");
    printf("2.....pop\n");
    printf("3.....show\n");
    printf("4.....peek\n");
    printf("5.....reset\n");
    printf("6.....exit\n");
    printf("enter your choice\n");
    scanf("%d",&c);
    switch(c){
     case 1:
         push();
         break;
     case 2:
         pop();
         break;
    case 3:
         show();
         break;

    case 4:
         peep();
         break;

    case 5:
         initialise();
         break;
    case 6:
         printf("see you later\n");
         break;
    default:
        printf("invalid choice\n");
    }
    for(int i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }

    }while(c!=6);
}
int isempty(){
    return(top==-1);
}
void push(){
if(top==size-1){
    printf("stack overflow\n");
    return;
}
printf("enter a number\n");
scanf("%d",&stack[++top]);

}
void pop(){
if(top==-1){
    printf("stack empty\n");
    return;
}else{
printf("%d\n",stack[top]);
top--;
}

}
void peep(){

printf("%d",stack[top]);}
void show(){
if(isempty()){
    printf("stack is empty\n");
}
else{
    int i=top;
    while(i>=0){
        printf("%d\n",stack[i]);
        i--;
    }
}

}