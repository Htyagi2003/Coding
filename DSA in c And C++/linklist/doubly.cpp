#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
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
void print(Node *&head){
      Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"---";
            temp=temp->next;
        } 
    }
void insertathead(Node *&head,Node*&tail,int d){
    if(head==NULL){
      Node*temp=new Node(d);
      head=temp;
      tail=temp; 
    }
    else{
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
    } 
}
void insertATtail(Node *&tail,Node*&head,int d){
    if(tail==NULL){
      Node*temp=new Node(d);
      tail=temp;
      head=temp;  
    }
     Node *temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;   
    }
void insertAtpos(Node *&tail,Node *&head,int pos,int d){
   if(head==NULL){
      Node*temp=new Node(d);
      head=temp;  
    } 
    else{
    //insert at first
    if(pos==1){
    insertathead (head,tail,d);
    return;
    }
    Node *temp=head;
     int c=1;
    while(c!=pos-1){
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){
        insertATtail(tail,head,d);
        return;
    }
    Node *nodetoinsert=new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;
    }
}
void deletenode(Node *&head,Node*&tail,int pos){
    if(pos==1){
        Node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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
        currrent->prev=NULL;
        currrent->next=NULL;
        delete currrent;
    }
} 
    // get length of a linklist
int getlen(Node *&head){
      int l=0;
      Node *temp=head;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        return l;
    }
    int main(){
        Node*head=NULL;
        Node*tail=NULL;
        insertathead(head,tail,20);
        insertATtail(tail,head,30);
        insertAtpos(tail,head,3,20);
        print(head);
        cout<<endl;
        cout<<getlen(head)<<endl;
        deletenode(head,tail,2);
        print(head);
        deletenode(head,tail,2);
        print(head);


    }
    