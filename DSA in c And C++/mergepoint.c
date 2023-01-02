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

Node *getMergeNodeUtil(int d, Node* head1, Node* head2) {
  int i;
  Node* current1 = head1;
  Node* current2 = head2;

  for (i = 0; i < d; i++) {
    if (current1 == NULL) {
      return NULL;
    }
    current1 = current1->next;
  }

  while (current1 != NULL && current2 != NULL) {
    if (current1 == current2) {
      return current1->val;
    }
    current1 = current1->next;
    current2 = current2->next;
  }

  return NULL;
}
Node * getMergeNode(Node*st1, Node* st2) {
    int n=count_nodes(st1);
    int m=count_nodes(st2);
    int d;

  if (n > m) {
    d = n - m;
    return getMergeNodeUtil(d, st1, st2);
  } 
  else {
    d = m - n;
    return getMergeNodeUtil(d, st2, st1);
  }
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
    mergePoint=getMergeNode(&st1,&st2);
    show(mergePoint);
}