#include <stdio.h>
#define size 20
struct item
{
    int value;
    int priority;
};
struct queue
{
    int front;
    int rear;
    struct item data[size];
} pq;
void enqueue()
{
    if((pq.rear+1)%size==pq.front){
        printf("Queue if full\n");
        return ;
    }
    if(pq.front==-1){
       pq.front=pq.rear=0; 
    }
    else{
        pq.rear=(pq.rear+1)%size;
    }
    printf("enter item value\n");
    scanf("%d",&pq.data[pq.rear].value);
    printf("enter priority \n");
    scanf("%d",&pq.data[pq.rear].priority);
    printf("item %d inserted with %d priority",pq.data[pq.rear].value,pq.data[pq.rear].priority);

}
void dequeue()
{
    struct item temp;
    if(pq.front==-1){
        printf("Queue is empty\n");
        return;
    }
    if(pq.rear==pq.front){
        temp=pq.data[pq.front];
        pq.front=pq.rear=-1;
    }
    else{
    int i=pq.rear;
    while(i!=pq.front){
        if(pq.data[i].priority>pq.data[i-1].priority){
            temp=pq.data[i];
            pq.data[i]=pq.data[i-1];
            pq.data[i-1]=temp;
        }
        i=(i-1+size)%size;

    }
    temp=pq.data[pq.front];
    pq.front=(pq.front+1)%size;
    } 
    printf("%d    deleted with %d priority ",temp.value,temp.priority);
}
void show()
{
    if(pq.front==-1){
    printf("queue is empty\n");
    return ;
  }
  printf("ELEMENT OF PRIORITY\n");
  printf("VALUE       PRIORITY\n");
  int i=pq.front;
  while(i!=pq.rear){
    printf("%d          %d\n",pq.data[i].value,pq.data[i].priority);
    i=(i+1)%size;
  }
  printf("%d          %d\n",pq.data[i].value,pq.data[i].priority);
}

int main()
{
    int choice;
    pq.front = -1;
    pq.rear = -1;
    do
    {
        printf("\n WELCOME TO THE IMPLEMENTION OF PRIORITY QUEUE \n");
        printf("1.........enque\n");
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
