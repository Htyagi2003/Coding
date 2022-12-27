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
int main(){
    Node *st1=initialize();
    Node *st2=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,40);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    printf("st1 content:\n");
    show(st1);
    Node *temp=st1;
    int c=1;
    int g;

    printf("\nnode no. split:\n");
    scanf("%d",&g);
    
    while(temp!=NULL){

        if(c==g){
            st2 = temp->next;
            temp->next=NULL;
            break;
        }
        temp=temp->next;
        c++;
    }
    printf("st1:\n");
    show(st1);
    printf("\nst2:\n");
    show(st2);
    int l=count_nodes(st1);
    printf("\ntotal number of nodes= %d",l);
    

}