#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int coe;
    int pow;
    struct Node*next;
} Node;

// initialize the linked list
Node *initialize()
{
    return NULL;
};

// Creating Node
Node *createNode(int x,int y)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->coe = x;
    node->pow=y;
    node->next = NULL;
};


// Insert from last
void insert_last(Node **start, int x,int y)
{
    Node *newNode = createNode(x,y);
    if (*start == NULL)
    {
        *start = newNode;
        return;
    }
    Node *temp = *start;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Empty
int isEmpty(Node *start)
{
    if (start == NULL)
    {
        printf("Empty list");
        return 1;
    }
    return 0;
}

// Show Function
void show(Node *start)
{
   if (!isEmpty(start))
   {
    printf("\nPolynomial is\n");
    while(start!=NULL)
    {
        if(start->coe>=0)
        printf("+");
        printf("%dx^%d",start->coe,start->pow);
        start=start->next;
    }
   }
}