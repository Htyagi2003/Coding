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