#include <stdio.h>
#define size 5
struct queue
{
    int data[size];
    int front;
    int rear;
} q;
void enqueue()
{
    int item;
    if (q.rear == size - 1)
    {
        printf("queue if full\n");
    }
    else
    {
        printf("enter item:\n");
        scanf("%d", &item);
        q.data[++q.rear] = item;
        printf("item inserted\n");
        if (q.front == -1)
        {
            q.front = 0;
        }
        printf("\nfront=%d, rear=%d", q.front, q.rear);
    }
}
void dequeue()
{
    if (q.front == -1)
    {
        printf("queue is empty:\n");
    }
    else
    {
        printf(" deleted item=%d\n", q.data[q.front]);
        q.front++;
        if (q.front > q.rear)
        {
            q.front = -1;
            q.rear = -1;
        
        }
        printf("front=%d, rear=%d", q.front, q.rear);
    }
}
void show()
{
    if (q.front == -1)
    {
        printf("queue is empty\n");
    }
    printf(" items in queue\n");
    for (int i = q.front; i <= q.rear; i++)
    {
        printf("%d ", q.data[i]);
    }
}

int main()
{
    int choice;
    q.front = -1;
    q.rear = -1;
    do
    {
        printf("\n1.........enque\n");
        printf("2.........dequeue\n");
        printf("3..........show\n");
        printf("4..........Exit\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            printf("exiting..........\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 4);
}