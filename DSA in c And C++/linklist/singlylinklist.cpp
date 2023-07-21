#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
         int val=this->data;
         //memroy free
         if(next!=NULL){
            delete next;
            next=NULL;
         }
         cout<<"Memory is free for nodd with data "<<val<<endl;
    }
};
void insertAThead(Node *&head,int d){
     Node *temp=new Node(d);
     temp->next=head;
     head=temp;      
    }
void insertATtail(Node *&tail,int d){
     Node *temp=new Node(d);
     tail->next=temp;
     tail=temp;   
    }
void insertAtpos(Node *&tail,Node *&head,int pos,int d){
   
    
    //insert at first
    if(pos==1){
    insertAThead(head,d);
    return;
    }
    Node *temp=head;
     int c=1;
    while(c!=pos-1){
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){
        insertATtail(tail,d);
        return;
    }
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
    
void print(Node *&head){
      Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"---";
            temp=temp->next;
        }
    }
int getlen(Node *&head){
      int l=0;
      Node *temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l; 
    }
void deletenode(Node *&head,Node*&tail,int pos){
    if(pos==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    else{
        int cnt=1;
        Node*prev=NULL;
        Node*currrent=head;
        while(cnt<pos){
            prev=currrent;
            currrent=currrent->next;
            cnt++;
        }
        if(currrent->next==NULL){
            tail=prev;
        }//to update tail at deletion of
        prev->next=currrent->next;
        currrent->next=NULL;
        delete currrent;
    }
}
int main(){

   Node*node1=new Node(10);

   //head pointed to node 1
   Node *head=node1;
   //tail  pointed to node 1
   Node *tail=node1;

//    insertAThead(head,15);
//    insertAThead(head,16);
//    insertAThead(head,17);
   insertATtail(tail,11);
   insertATtail(tail,12);
   insertAtpos(tail,head,1,118);
   //insertAtpos(tail,head,8,118);
   print(head);
   cout<<"head :"<<head->data<<endl;
   cout<<"tail :"<<tail->data<<endl;
   deletenode(head,tail,4);
   
   //deletenode(head,3);
   print(head);
   cout<<"head :"<<head->data<<endl;
   cout<<"tail :"<<tail->data<<endl;
   cout<<getlen(head)<<endl;
}