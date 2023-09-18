#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int n){
        data=n;
        left=right=NULL;
    }
};
void preorder(struct Node *root){
    
    if(root==NULL){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);

}
void inorder(struct Node *root){
    
    if(root==NULL){
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);

}
void postorder(struct Node *root){
    
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;

}
//iterative preorder
vector<int> preorderit(Node *root){
    
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    stack<Node *>st;
    st.push(root);
    while(!st.empty()){
        Node * node=st.top();
        st.pop();
        if(node->right!=NULL){
        st.push(node->right);
        }
        if(node->left!=NULL){
        st.push(node->left);
        }
        ans.push_back(node->data);
    }

    return ans;
}
//iterative in order
vector<int> inorderit(Node *root){
    stack<Node *>st;
    Node *node=root;
    vector<int>ans;
    while(1){
    if(node!=NULL){
        st.push(node);
        node=node->left;
    }
    else{
        if(st.empty()) {
            break;
        }
        node=st.top();
        st.pop();
        ans.push_back(node->data);
        node=node->right;
    }
    }
    return ans;

}
//iterative postorder two stack
vector<int>postorderit(Node *root){
    vector<int>ans;
    stack<Node *>st1,st2;
    st1.push(root);
    while(!st1.empty()){
        Node *node=st1.top();
        st1.pop();
        st2.push(node);
        if(node->left!=NULL){
            st1.push(node->left);
        }
        if(node->right!=NULL){
            st1.push(node->right);
        }

    }
    while(!st2.empty()){
        ans.push_back(st2.top()->data);
        st2.pop();
    }
    return ans;

}
int main(){
    struct Node *root=new Node(23);
    root->left=new Node(46);
    root->right=new Node(11);
    root->right->right=new Node(1);
    root->right->left=new Node(10);
    root->left->right=new Node(29);
    root->left->left=new Node(20);
    // cout<<"preroder"<<endl;
    // preorder(root);
    // cout<<"inorder"<<endl;
    // inorder(root);
    cout<<"postoder"<<endl;
    postorder(root);
    vector<int>ans=postorderit(root);
    for(auto it:ans){
        cout<<it<<" ";
    }
    
}