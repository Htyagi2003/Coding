// it is a linear data structure that willl contain information and addres of adjecent block(node) in link list each node is connected with each other and the last node contains null. start node is determined by a pointer called start or haed node.
// the movement can possible in one way only due to this type of link list is called singly link list.
// limitation of array
// 1. static memory allaocation- once memeory is alloacted to anny array it can not be extended or compressed at run time
// 2.contigous memmory alloacation - everyb time when we create any array it must alocated into contigous manner
// node - node is a pointer vaiable of structure type
// DMA- 1.calloc,2.malloc
// 1. 1 when we have to create memmory for any array then we use calloc
// 2. when we have to create memmory any data type
// note - these two methods will return void pointer on success or null for unsuccesful
// void pointer can be converted in to address of any x here x can be any data type.
#include <stdio.h>
#include <stdlib.h>
struct list
{
    int value;
    struct list *next;
}*start;
void beg(){
    struct list *newnode=(struct list*)malloc(sizeof(struct list));
    printf("enter value:\n");
    scanf("%d",&newnode->value);
    newnode->next=NULL;
    if(start!=NULL){
        newnode->next=start;

    }
    start=newnode;
    printf("node inserted\n");
}
void show(){
    if(start==NULL){
        printf("enpty list\n");
        return ;
    }
    printf("node are\n");
    struct list *temp=start;
    while(temp!=NULL){
        printf("%d|%p\t",temp->value,temp->next);
        temp=temp->next;
    }
}
int main()
{   start=NULL;
for(int i=0;i<5;i++){
    beg();
}
    show();
    // struct list *node;
    // struct list *node1;
    // node = (struct list *)malloc(sizeof(struct list));
    // node1 = (struct list *)malloc(sizeof(struct list));
    // if (node == NULL)
    // {
    //     printf("memmory n/a\n");
    // }
    // printf("enter value:\n");
    // scanf("%d", &node->value);
    // node->next = node1;
    // printf("enter value:\n");
    // scanf("%d", &node1->value);
    // node1->next = NULL;
    // printf("value=%d\n", node->value);
    // printf("%p\n", node->next);
    // printf("%p\n", node);
    // printf("value=%d\n", node1->value);
    // printf("%p\n", node1->next);
    // printf("%p\n", node1);
    // printf("%d\n", start);
}
//to insrt any node at last if start is null then xreate new node and make it start else move towrads end untill node of next is null then assign new node to the last node so in worst case oreder of n complexity where as in best in ordee of 1
