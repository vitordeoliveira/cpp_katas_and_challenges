// 700. Search in a Binary Search Tree
// Easy
// 4.7K
// 163
// Companies
// You are given the root of a binary search tree (BST) and an integer val.

// Find the node in the BST that the node's value equals val and return the subtree rooted with that node. If such a node does not exist, return null.

 

// Example 1:


// Input: root = [4,2,7,1,3], val = 2
// Output: [2,1,3]
// Example 2:


// Input: root = [4,2,7,1,3], val = 5
// Output: []



 // Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return nullptr;

        if(root->val == val) return root;
        
        TreeNode* temp = searchBST(root->left, val);

        if(temp){
            return temp;
        } else {
            return searchBST(root->right, val);
        }
        
    }
};

class Solution {
public:
     TreeNode* searchBST(TreeNode* root, int val) {
        if(!root || root->val == val) return root;
        if(root->val < val) return searchBST(root->right, val);
        if(root->val > val) return searchBST(root->left, val);
        return nullptr;
    }
};