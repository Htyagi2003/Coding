//tree is non linear structure
//the node thats doesnt have any parent is called root node
//there are twon types of nodes
//1.internal and 2. external
// that node that doesntb have any child is known as external node
// all node except external node is known as internal 
// but a is not both beacuse its root node
//children of same parenty is called sibling
// Ancestors-a node p is an ancestor of node q if there exist a path from root to q and p appears on the path
//desecendant- the node q is called desecendant of p
// the set of all nodes at a given depth is called the level of the tree
// the level of root node is 0 and so on to chlid
//edges-the length btw two node
//the level of the btree is the longest path from root to leaf node
// the depth of node is the length of the path from node root to the node
//height-the height of a node is the lenght of the path from that node to deepest node 
//thr height of tree is the lenghtn of the path from root to the deepest node in the tree
//NOTE-A tree with only one node(rrot) has height =0
//top to bottom-depth and bottom to top-height
// height of the tree is the maximum height among all the node in the tree and depth of tree is the maximum depth among all the nodes in the tree for a given tree depth and height returns the same value but for the individual nodes we make it diifrent results
//the size of a node is the number of desendents it has including itself 
//BINARY TREE -a treee in which each node has 0,1,2,child empty tree is also binary tree
// skew tree-that parent have only one child
//1.left skew and 2. right skew
//types of binary tree 
//1.strict binary tree -each node has exactly 0 or 2 children
// Full binary tree- each node has exactly 0 or 2 children and all leafs nodes are at the same level
//complete binary tree-all the leaf nodes are at height h or h-1 and also without any misssing sequence 
//Almost complete-all levels are completelty filled except the last level also the last level must not be filled completely . the last level in not full then all the nodes sshould be filled from the left
// height and no. of nodes in a binary tree-if the height of the tree is h then maximum no. of node is 2^(h+1)+1
// the total no. of leaf node in a binary tree of height h=2^h;or 2^l where l is the level
// Binary tree representation
//1. by array or by linklist
// Draw a binary tree with three nodes- if no. of node is n then total bianry tree possible are 2n(c)n/n+1
// if we have b tree of n node and each node have its own key then total no. of tree tree would be n!*2n(c)n/n+1
// NOTE- representaion of binary tree-array and link list
//1. ARRAY-in array representation the rrrot nide will be stored in first index the left child will be stored at 2n+1 and right child will be stored 2n+2 where n is parent node
// size of array = total no. of nodes 2^(h+1)-1 for h=3 it should be 15
// but there is wastage of memory in array representaion
// LINK LISt-in link list representaion each have 3 parts
// TREE Traversal methods -:
//1.level traversing-traverse each level start from root that is level 0 then moved downwards and print each node left to right
// 2. pre order(n(roott) left right)-:{
//     preorder(root){
//         if(root==NULL)
//         return 
//         print(root)
//         preorder(root->left)
//         preorder(root->right)
//     }
// }
//3.inorder(LNR)
//inorder(root){
//         if(root==NULL)
//         return 
//
//         preorder(root->left)
//         print(root)
//         preorder(root->right)
//     }
//4 post order(LRN):-
//postorder(root){
//         if(root==NULL)
//         return 
//
//         preorder(root->left)
//        
//         preorder(root->right)
         //print(root)
//     }

//TREE contruction
// draw atree based oin given traversal
//case 1.- preorder and in ordeer
//case 2-post order and in order
// case 1-
// step 1-right all the nodes of inorder traversal
//D,B,F,E,A,C,H,G
// STEP 2- select on by one node from preorder
//A,B,D,E,F,C,G,H
//STTEP-3- marks the selected node in order taversal and move of left node to its its left side and right nodes to right side
// repeat step 2 untill graph is made
//case 2-post order and in order
//  all same but we start from end in post order
// BINARY SEARCH TREE-yeh binary search nhi h
// binary search tree is ad data structure which has following propperties
//each node contain a value with maximum two child the value of left child will be less than parent value where as the value right node is larger than parent node
// question- insert the given value in to an initailly empty binary search tree 
//30,40,24,58,48,26,11,13
//in the bst the node will be inserted as as a leaf node
// the comparision will be start from root node in the order left of right
// deletion in bst-:
//case 1-: delete leaf node
// find and delete simply and putt null to the parent either side 
// case 2- delete node having one child
// delete node and replace it with only one child
// case 3-2 child
//to remove a node having 2 child we have 2 option 
//1.select in order preedecer node(left se sabse bada).
//2.select in order successer node(right se sabse chota).
//NOITE-inorder traversal of any bst will always ascending order
// Encoding TTechnique-:our computer system works on binary(01) so to pass any datafrom one device to another device will be performed digitally for this our computer system uses ascii codes that means each character have thier unique ascii no. for example A-65 and a-97
//no.1 and no.2-variable sized(hofman encoding)- fixed length -msg-BCCDACCBDABCCDEEAAEDA 8*20=160 bits after fixed length-115 bits see in notebook;
// hufman enconsing- step 1- find out the frequency of each character 
//A-5,B-3,C-6,D-4,E-2;
// arrange them in ascending order 
//step 3 select first 2 item add them and insert them to priority queue
// repeat step 2 and 3 until 1 elemnt in to priority quue
// in the tree mark left child 0 and right child 1 for all the nodes to encode all characters follow the path from root to leaf
//our characters are always insreted in the leaf node
//question -a text is a,de up of characters ABCDE each occuring with the probability a-0.11,b-.40,c-0.16,d-.09,e-0.24 the avergae length of hoffman coding?
// in any complete binary tree if total n no. of element is available then height of the tree should be log2(n)
// if elements are sorted than bst i slike linear search so comp-o(n) so the seq of keys is deped on the order of element
//HEIGHT _ BALANCED BINARY SEARCH TREE-(AVL)-in avl tree we calculate balance factor of each node b.f=height of left subtree-height of right sub tree. if the bf of any node is zero,-1,1 then that node is called balanced other wise we have to perfrom rotations.
//TYPES OF ROTATION-
//1.LL(left left)-left me zyada bhaar
//1.rr(right right)
//1.rl(right left)
//1.lr(left right)
//create a avl tree with the followings keys-40,20,10,25,30,22,50
//the unblanced avl tree balance factor should not be greater than 2 or less than -2 agar ara h toh galti ki h
// in every rotation only three nodes will be participated
//in aval tree the instertion will be performed one by one and after each in sretion we check the balance factor then can perform two operation either insert new key if the tree is balanced other wise first balance the tree ,then perform insertioin of next element
//DELETION IN AVL-deletion should be possible if and only if avl tree is balanced 
//1.deletion of leaf node-direct deletion ho jaega and balance the tree if required
//2.deletion of node having one child-delet the node and replace it with only one child and make it balance if required
//2. having two child 
//2.1 replace it with left highest value node or replace lowest right value node
//B-TREE
// level M=max child
// no. of values 
// if the order of any b tree is m then a root can have maximum M children and minimum 2 children
//internal or intermediates nodes can have maximum m children and minimum[m/2]  
//root me maximum keys m-1 
//internal nodes me keys maximum keys=m-1 and minimum me 1 and minimum nodes me [m/2]-1
// if a btree order is 5 then find out maximum children in root node and intermediate node now fin out the maximum and minimum keys for root node and intermediate node
// b tree will be spillited from median once a node is full of keys
//deletion in b tree 
//to delete any value in b tree the value may be found in the 
//1. in a leaf node having suffficeint number of keys 
//2. in a leaf having minimum no. of keys
//3. deletion from internal nodes having sufficient keys
//4. deletion from internal nodes having minimum no. of keys
//5. deletion from root node
struct node{
    int val;
    struct node*left;// left child addres
    struct node*right;//right child addres
}
#include<stdio.h>
int main(){
    int arr[15];

}