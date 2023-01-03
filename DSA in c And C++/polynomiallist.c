//A link list can represent any polynomial 
#include "polynomial.h"
int main()
{
    Node *poly1=initialize();
    Node *poly2=initialize();
    Node *poly3=initialize();
    insert_last(&poly1,2,5);
    insert_last(&poly1,4,2);
    insert_last(&poly1,-3,1);

    insert_last(&poly2,-3,4);
    insert_last(&poly2,10,3);
    insert_last(&poly2,25,1);
    insert_last(&poly2,5,0);

    show(poly1);
    show(poly2);
}