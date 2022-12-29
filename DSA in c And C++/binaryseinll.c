#include"linklist1.h"

// binary search can be implemented by link list that is same as linear search in terms of time complexity
//that is order of n.
//In array we can find middle element in constant time beacuse we have index value asosicated with array but in linlist we have ton find middle element in ordeer of n time with the help of two pointer approarch
// thats why the time time complexity is order of (n)
Node *Middle(Node *start,Node *last){
    Node *slow=start;
    Node *fast=start->next;
    while(fast!=last){
        fast=fast->next;
        if(fast!=last){
        slow=slow->next;
        fast=fast->next;
        }
    }
    return slow;
}
Node *Binary_search(Node*start,int val){
    Node *last=NULL;
    do{
        Node *mid=Middle(start,last);
        if(mid==NULL)
        return NULL;
        if(mid->val==val)
        return mid;
        if(mid->val<val)
        start=mid->next;
        if(mid->val>val)
        last=mid;
    }while(last!=NULL||start!=last);
    return NULL;
}
int main(){
    Node *st1=initialize();
    Node *st2=initialize();
    insert_beg(&st1,70);
    insert_beg(&st1,60);
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    printf("st1 content:\n");
    show(st1);
    int val;
    printf("\nEnter The VAlue to Be Search:\n");
    scanf("%d",&val);
    st2 =Binary_search(st1,val);
    printf("Middle Of the LInk List\n");
    
}