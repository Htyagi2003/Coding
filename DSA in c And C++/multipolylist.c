#include "polynomial.h"
Node *multi(Node*list1,Node*list2)
{
    Node*result=NULL;
    while(list1!=NULL){
        for(Node *l2=list2;l2!=NULL;l2=l2->next){
            int pow=list1->pow+list2->pow;
            int coe=list1->coe*list2->coe;
            insert_last(&result,coe,pow);
        }
        list1=list1->next;
    }
    return result;

}
int main(){
    Node * list1=initialize();
    Node *list2=initialize();
    Node *result=initialize();
    insert_last(&list1,2,5);
    insert_last(&list1,4,2);
    insert_last(&list1,-3,1);

    insert_last(&list2,-3,4); 
     //insert_last(&list2,10,3);
    //insert_last(&list2,25,1);
    // insert_last(&list2,5,0);
    show(list1);
    show(list2);
    result=multi(list1,list2);
    show(result);

}