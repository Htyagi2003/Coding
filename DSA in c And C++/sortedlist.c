//sorted list by insertion sort
#include "linklist1.h"
void helper(Node **start, Node *newNode)
{
    if (newNode->val < (*start)->val)
    {
        newNode->next = *start;
        *start = newNode;
    }
    else
    {
        Node *current = (*start)->next;
        Node *prev = *start;
        while (current != NULL)
        {
            if (current->val > newNode->val)
            {
                break;
            }
            current = current->next;
            prev = prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
}
void sortlist(Node **start){
    Node *start2=*start;
    *start=(*start)->next;
    start2->next=NULL;

    while(*start!=NULL){
     Node *temp=*start;
    *start=(*start)->next;
     temp->next=NULL;
     helper(&start2,temp);
     
    }
    *start=start2;
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
    sortlist(&st1);
    printf("\nAfter sorting\n");
    show(st1);

}