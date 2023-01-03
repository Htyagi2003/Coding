#include "linklist1.h"
// circular ll can be of two type
// 1. singular circular ll
// 2. doubly circular ll
//if the last node of singly ll contains the adress of first node then it is call circular sing. ll
//the adress of last node is given with the help of this node we can move to first node
//primitive operations
// insert , delete , traverse
//insert - beg,end,position
//same in delete
void traverse(Node *last){
    Node *temp=last->next;
    do{
        printf("%d",temp->val);
        temp=temp->next;
    }while(temp!=last->next);
    

}
