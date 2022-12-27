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
struct stack push(struct stack d){
    if (d.top==(size-1))
    {
        printf("stack overflow\n");
    }
    else{
        printf("enter the number you want to push:\n");
        d.top++;
        scanf("%d",&d.data[d.top]);
        return d;
    }
    

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
        printf(" data poped=%d\n",d.data[d.top]);
        d.top--;
        return d;
    }
}
int menu(){
    int choice;
    printf("WELCOME TO THE STACK:");
    printf("\n1...............Push\n");
    printf("2...............Pop\n");
    printf("3...............Show\n");
    printf("4...............Peep\n");
    printf("5...............Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    return choice;
}

void peek(struct stack d){
    if(isempty(d)){
        printf("empty stack\n");
    }
    else{
        printf("\n top element=%d\n",d.data[d.top]);
    }
}
int main(){
    struct stack d;
    int choice;
    d=init(d);
    do{
        choice=menu();
    switch(choice){
     case 1:
         d=push(d);
         break;
     case 2:
         d=pop(d);
         break;
     case 3:
         show(d);
         break;
     case 4:
         peek(d);
         break;
    case 5:
         printf("thank you for using this stack program\n");
         break;  
    default:
        printf("invalid choice\n");
    }  
}while (choice!=5);
}
