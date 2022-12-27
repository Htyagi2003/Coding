#include <stdio.h>
#define size 20
struct queue
{
    int data[20];
    int front;
    int rear;
} cq;
int enqueue_front()
{
    if ((cq.rear + 1) % size == cq.front)
    {
        printf("queue if full\n");
        return 0;
    }

    if (cq.front == -1)
        cq.front = cq.rear = 0;
    else
        cq.front = (cq.front + 1) % size;
    printf("enter item \n");
    scanf("%d", &cq.data[cq.rear]);
    printf("item inserted\n");
    return 1;
}
int enqueue_rear()
{
    if ((cq.rear + 1) % size == cq.front)
    {
        printf("queue if full\n");
        return 0;
    }

    if (cq.front == -1)
        cq.front = cq.rear = 0;
    else
        cq.rear = (cq.rear + 1) % size;
    printf("enter item \n");
    scanf("%d", &cq.data[cq.rear]);
    printf("item inserted\n");
    return 1;
}
int dequeue_rear(){
    if(cq.front==-1){
        printf("queue is empty\n");
        return 0;
    }
    if(cq.front==cq.rear){
        cq.front=cq.rear=-1;
    }
    else{
        
        cq.rear=(cq.rear-1+size)%size;
        printf("item deleted\n");
    }

}
int dequeue_front(){
    if(cq.front==-1){
        printf("queue is empty\n");
        return 0;
    }
    if(cq.front==cq.rear){
        cq.front=cq.rear=-1;
    }
    else{
        cq.front=(cq.front+1)%size;
        printf("item deleted\n");
    }

}
void show(){
  if(cq.front==-1){
    printf("queue is empty\n");
    return ;
  }
  printf("queue item\n");
  int i=cq.front;
  while(i!=cq.rear){
    printf("%d ",cq.data[i]);
    i=(i+1)%size;
  }
  printf("%d ",cq.data[i]);
}

int main()
{
    int choice;
    cq.front = -1;
    cq.rear = -1;
    do
    {
        printf("\n1.........enque from rear\n");
        printf("2.........enqueue from front\n");
         printf("3.........dequeue from front\n");
        printf("4..........show\n");
        printf("5..........Exit\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue_rear();
            break;
        case 2:
             enqueue_front();
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            show();
            break;
        case 5:
            printf("exiting..........\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (choice != 5);
}
