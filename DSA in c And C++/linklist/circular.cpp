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
         if(this->next!=NULL){
            delete next;
           this->next=NULL;
         }
         cout<<"Memory is free for node with data "<<val<<endl;
    }
};
void insertnode(Node*&tail,int ele,int d){
    
    if(tail==NULL){
    Node *temp=new Node(d);
    temp->next=temp;
    tail=temp;
    }
    else{
    Node *temp=tail;
    while(temp->data!=ele){
        temp=temp->next;
    }
    Node*nodetoinsert=new Node(d);
      nodetoinsert->next=temp->next;
      temp->next=nodetoinsert; 
    }
}
void print(Node*&tail){
    if(tail==NULL){
        cout<<"All Ready Empty List;"<<endl;
        return;
    }
    Node*temp=tail;
    do{
     cout<<tail->data<<" ";
     tail=tail->next;  
    }while(tail!=temp);
    cout<<endl; 

}
void deletenode(Node*&tail,int ele){
    if(tail==NULL){
        cout<<"All Ready Empty List;"<<endl;
        return;
    }
    else{
        Node*prev=tail;
        Node*temp=prev->next;
        while(temp->data!=ele){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        if(temp==prev){
            tail=NULL;
        }
        if(tail==temp){
            tail=prev;
        }
        temp->next=NULL;
        delete temp;

    }
}
int main(){
    Node *tail=NULL;
    insertnode(tail,20,30); 
    // insertnode(tail,30,50);
    // insertnode(tail,30,60);
    // insertnode(tail,20,30); 
    // insertnode(tail,20,30);
    deletenode(tail,30);

    print(tail);
}