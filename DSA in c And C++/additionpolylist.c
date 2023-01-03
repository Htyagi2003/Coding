#include "polynomial.h"
Node *AddPoly(Node*list1,Node*list2)
{
    Node*result=NULL;
    while(list1!=NULL&&list2!=NULL)
    {
        if(list1->pow>list2->pow)
        {
            insert_last(&result,list1->coe,list1->pow);
            list1=list1->next;
        }
        else if(list2->pow>list1->pow)
        {
            insert_last(&result,list2->coe,list2->pow);
            list2=list2->next;
        }
        else
        {
            int s=list1->coe+list2->coe;
            insert_last(&result,s,list1->pow);
            list1=list1->next;
            list2=list2->next;
        }
    }
    while(list1!=NULL||list2!=NULL)
    {
        if(list1!=NULL)
        {
            insert_last(&result,list1->coe,list1->pow);
            list1=list1->next;
        }
        if(list2!=NULL)
        {
            insert_last(&result,list2->coe,list2->pow);
            list2=list2->next;
        }
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
    insert_last(&list2,10,3);
    insert_last(&list2,25,1);
    insert_last(&list2,5,0);
    result=AddPoly(list1,list2);
    show(result);

}