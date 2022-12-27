#include<stdio.h>
struct queue {
    int data[20];
    int front;
    int rear;
}dq;
void insert_rear(){
  
}
int main(){
   dq.front=-1;
   dq.rear=-1;
   int choice;
   printf("\n=======================================\n");
   printf("======INPUT RESTRICTED QUEUE===========\n");
   printf("=======================================\n");
   do{
    printf("1...........insert from rear:\n");
    printf("2...........delete from front:\n");
    printf("3...........delete from rear:\n");
    printf("4...........show the queue:\n");
    printf("5...........exit from programme:\n");
    printf("ENTER THE CHOICE: ");
    scanf("%d",&choice);
   }while(choice!=5);
}