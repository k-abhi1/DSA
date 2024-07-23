// Given two BSTs, return elements of merged BSTs in sorted form.

// Examples :

// Input:
// BST1:
//        5
//      /   \
//     3     6
//    / \
//   2   4  
// BST2:
//         2
//       /   \
//      1     3
//             \
//              7
//             /
//            6
// Output: 1 2 2 3 3 4 5 6 6 7
// Explanation: After merging and sorting the two BST we get 1 2 2 3 3 4 5 6 6 7.
// Input:
// BST1:
//        12
//      /   
//     9
//    / \    
//   6   11
// BST2:
//       8
//     /  \
//    5    10
//   /
//  2
// Output: 2 5 6 8 9 10 11 12
// Explanation: After merging and sorting the two BST we get 2 5 6 8 9 10 11 12.
class Solution {
  public:
    void inorder(Node* root, vector<int>& vec){
        if(root==NULL)
            return;
        inorder(root->left, vec);
        vec.push_back(root->data);
        inorder(root->right, vec);
    }
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> bs1;
        vector<int> bs2;
        vector<int> ans;
        inorder(root1, bs1);
        inorder(root2, bs2);
        int n = bs1.size();
        int m = bs2.size();
        int i =0, j = 0;
        while(i<n && j<m){
            if(bs1[i] > bs2[j]){
                ans.push_back(bs2[j]);
                j++;
            }
            else{
                ans.push_back(bs1[i]);
                i++;
            }
        }
        while(i<n){
            ans.push_back(bs1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(bs2[j]);
            j++;
        }
        return ans;
    }
};

