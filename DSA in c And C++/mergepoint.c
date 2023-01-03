#include "linklist1.h"
int count_nodes(Node*start){
    if(start==NULL)
    {
        printf("Empty List\n");
        return 0;
    }
    Node*temp=start;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}
Node * findmergepoint(Node *A,Node*B){
     int n=count_nodes(A);
     int m=count_nodes(B);
     int d=n-m;
     if(m>n){
        Node *temp=A;
        A=B;
        B=temp;
        d=m-n;
     }
     for(int i=0;i<d;i++){
        A=A->next;
     }
     while(A!=NULL&&B!=NULL){
      if(A->val==B->val){
        return A;
      }
      A=A->next;
      B=B->next;
     }
     return NULL;
}

int main() {
  Node* st1 = initialize();
  Node* st2 = initialize();
  Node* mergePoint = initialize();

  /* create linked list 1: 1->2->3->4 */
    insert_beg(&st1,4);
    insert_beg(&st1,3); 
    insert_beg(&st1,2);
    insert_beg(&st1,1);
    insert_beg(&st1,9);
    insert_beg(&st1,11);
    
    show(st1);

  /* create linked list 2: 5->6->7->4 */
    insert_beg(&st2,4);
    insert_beg(&st2,7);
    insert_beg(&st2,6);
    insert_beg(&st2,5);
    
    show(st2);
    mergePoint=findmergepoint(st1,st2);
    show(mergePoint);
    }