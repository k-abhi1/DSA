// Given a binary tree. Find the size of its largest subtree which is a Binary Search Tree.
// Note: Here Size equals the number of nodes in the subtree.

// Examples :

// Input:   1
//         /  \
//         4   4              
//        / \ 
//       6   8
// Output: 1 
// Explanation: There's no sub-tree with size greater than 1 which forms a BST. All the leaf Nodes are the BSTs with size equal to 1.

// Input:    6
//         /   \
//       6      2              
//        \    / \
//         2  1   3
// Output: 3
// Explanation: The following sub-tree is a BST of size 3:  2
//                                                        /   \
//                                                       1     3

class Solution{
    public:
    int res = 1;
    vector<int> rec( Node* root ){
        vector<int> l = {1,0,INT_MIN,INT_MAX}, r = {1,0,INT_MIN,INT_MAX};
        if ( root->left ) l = rec(root->left);
        if ( root->right ) r = rec(root->right);
        if ( l[0] != -1 && r[0] != -1 && l[2] < root->data && r[3] > root->data ){
            res = max(res, l[1]+r[1]+1);
            if ( l[2] == INT_MIN && l[3] == INT_MAX ){
                l[2] = root->data; l[3] = root->data;
            }
            if ( r[2] == INT_MIN && r[3] == INT_MAX ){
                r[2] = root->data; r[3] = root->data;
            }
            return {1, l[1]+r[1]+1, max({root->data,l[2],l[3],r[2],r[3]}), 
                                min({root->data,l[2],l[3],r[2],r[3]})};
        } else return {-1, l[1]+r[1]+1, max({root->data,l[2],l[3],r[2],r[3]}), 
                                min({root->data,l[2],l[3],r[2],r[3]})};
    }
    int largestBst(Node *root){
        rec(root); return res;
    }
}; 
