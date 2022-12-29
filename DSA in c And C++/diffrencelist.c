#include "linklist1.h"

void Helper(Node **start,Node * newNode){
    if(newNode->val<(*start)->val){
        newNode->next = *start;
        *start = newNode;
    }
    else{
        Node *current = (*start)->next;
        Node * prev = *start;
        while(current!=NULL){
            if(current->val > newNode->val){
                break;
            }
            current=current->next;
            prev=prev->next;
        }
        newNode->next = prev->next;
        prev->next = newNode;
    }
}

int searchin(Node *start, int sval){
    Node *current  = start;
    while(current !=NULL){
        if(current->val == sval)
            return 1;
        current = current->next;
    }
    return 0;
}

void SortList(Node **start){
    Node *start2= *start;
    *start =(*start)->next;
    start2->next= NULL;
    while(*start !=NULL){
        Node * temp = *start;
        *start = (*start)->next;
        temp->next = NULL;
        Helper(&start2,temp);
    }
    *start = start2;
}

int main(){
    Node * st1 = initialize();
    Node * st2 = initialize();
    Node * st1_st2 = initialize();
    Node * st2_st1 = initialize();
    insert_beg(&st1,4);
    insert_beg(&st1,5);
    insert_beg(&st1,2);
    insert_beg(&st1,7);
    insert_beg(&st1,9);
    SortList(&st1);
    insert_beg(&st2,10);
    insert_beg(&st2,5);
    insert_beg(&st2,1);
    insert_beg(&st2,11);
    insert_beg(&st2,9);
    show(st1);
    SortList(&st2);
    show(st2);

//O(n)
    struct Node * t1 = st1, * t2 = st2;
    while(t1 !=NULL){
        if(t1->val < t2->val){
             insert_end(&st1_st2,t1->val);
             t1=t1->next;
        }
        else if (t1->val == t2->val){
            t1=t1->next;
            t2=t2->next;
        }
        else{
            t2=t2->next;
        }
    }
    printf("\n\nThe difference of the two Linked List is: \n");
    show(st1_st2);
    struct Node * t3= st2, * t4 = st1;
    while(t3 !=NULL&&t4!=NULL){
        if(t3->val < t4->val){
             insert_end(&st2_st1,t3->val);
             t3=t3->next;
        }
        else if (t3->val == t4->val){
            t3=t3->next;
            t4=t4->next;
        }
        else{
            t4=t4->next;
        }
    }
    
   printf("\n\nThe difference of the two Linked List is: \n");
    show(st2_st1);

    return 0;
}