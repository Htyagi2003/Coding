
#include "linklist1.h"
void splitlist(Node *start,Node **list1,Node**list2){
    Node *fast=start->next;
    Node *slow=start;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    *list1=start;
    *list2=slow->next;
    slow->next=NULL;

}
Node* mergesortedlist(Node*list1,Node*list2){
    Node *result;
    if(list1==NULL)
    return list2;
    if(list2==NULL)
    return list1;
    if(list1->val<=list2->val){
        result=list1;
        result->next=mergesortedlist(list1->next,list2);
    }
    else{
        result=list2;
        result->next=mergesortedlist(list1,list2->next);
    }
    return result; 

}
void mergesort(Node **start){
    if(*start==NULL || (*start)->next==NULL)
    return;
    Node*list1;
    Node *list2;
    splitlist(*start,&list1,&list2);
    mergesort(&list1);
    mergesort(&list2);
    *start=mergesortedlist(list1,list2);

}
int main()
{
    Node *st1 = initialize();
    insert_beg(&st1, 4);
    insert_beg(&st1, 5);
    insert_beg(&st1, 2);
    insert_beg(&st1, 7);
    insert_beg(&st1, 9);
    printf("\nBefore sorting\n");
    printf("st1 content:\n");
    show(st1);
    mergesort(&st1);
    printf("\nAfter sorting\n");
    show(st1);

}