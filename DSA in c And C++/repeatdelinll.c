//program to delete all ocuureneces of x 
#include "linklist1.h"
int main(){
    Node *st1=initialize();
    insert_beg(&st1,50);
    insert_beg(&st1,10);
    insert_beg(&st1,30);
    insert_beg(&st1,20);
    insert_beg(&st1,10);
    insert_beg(&st1,40);
    insert_beg(&st1,10);
    insert_beg(&st1,10);
    printf("st1 content:\n");
    show(st1);
    Node *next=st1;
    Node *current=st1;
    int g;
    printf("\nEnter Value To be Deleted All occurence of X\n");
    scanf("%d",&g);
    
    while(!=NULL){
        if(temp->val==g){
         
            
        }
        
    }
    printf("st1:\n");
    show(st1);
    

}