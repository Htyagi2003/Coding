#include<stdio.h>
#define size 20
struct stack {
    int data[size];
    int top;
};
void push (struct stack *st,int r){
    st->top++;
    st->data[st->top]=r;
}
int pop(struct stack *st){
    int r=st->data[st->top];
    st->top--;
    return r;
}
void main(){
    struct stack st;
    int num;
    st.top=-1;
    printf("enter the number\n ");
    scanf("%d",&num);
    printf("binary:\n");
    printf("octal:\n");
    printf("hexadecimal:\n");

    printf("enter base for respective change:\n");
    int base;
    scanf("%d",&base);

    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while(num>0){
        int r=num%base;
        push(&st,r);
        num/=base;
    }
    printf("changed no..=");
    while (st.top!=-1)
    {
    int r=pop(&st);
    printf("  %c ",hex[r]);
    }
    
}
