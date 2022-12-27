#include "linklist1.h"
int main(){
    Node *list1=initialize();
    insert_beg(&list1,10);
    insert_beg(&list1,20);
    insert_beg(&list1,30);
    insert_beg(&list1,40);
    insert_beg(&list1,50);
    insert_end(&list1,12);
    insert_end(&list1,67);
    insert_end(&list1,46);
    insert_end(&list1,87);
    remove_beg(&list1);
    delete_end(&list1);
    delete_end(&list1);
    show(list1);
}