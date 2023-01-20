#include<stdio.h>
#define size 10
struct stack
{
    int data[size];
    int top; // default value is garbage beacuse tyagin is chu==
};
struct stack init(struct stack d){
    d.top=-1;
    return d;
}
int isempty(struct stack d){
    return(d.top==-1);
    }
struct stack push(struct stack d,int r){
    d.top++;
    d.data[d.top] = r;
    return d;
}
void show(struct stack d){
    int i;
    if(d.top==-1){
            printf("stack is empty\n");
    
    }
    else{
        printf("data of stack:\n");
        for (i = d.top; i>=0; i--)
        {
            printf("%d ",d.data[i]);
        }
        
    }
}
struct stack pop(struct stack d){
    if(isempty(d)){
        printf("stack is empty\n");
    }
    else{
        printf("%d",d.data[d.top]);
        d.top--;
        return d;
    }
}
int main(){
    struct stack d;
    d=init(d);
    int num;
    printf("enter the number you want to convert:\n");
    scanf("%d",&num);
while(num>0){
    int r=num%2;
    d=push(d,r);
    num/=2;
}
printf("Binary:");
    while (!isempty(d))
    {
        d=pop(d);
    }

    

}