// 98. Validate Binary Search Tree
// Medium
// 14.2K
// 1.2K
// Companies
// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left 
// subtree
//  of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 

// Example 1:


// Input: root = [2,1,3]
// Output: true
// Example 2:


// Input: root = [5,1,4,null,null,3,6]
// Output: false
// Explanation: The root node's value is 5 but its right child's value is 4.

#include <limits.h>

//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
private:
    long prev = LONG_MIN;
public:
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        bool res = isValidBST(root->left);
        if(prev < root->val){
            prev = root->val;
        } else {
            return false;
        }
        
        return res && isValidBST(root->right);
    }
};

// class Solution {
// public:
//     bool isValidBST(TreeNode* root, long& prev = *(new long(LONG_MIN))) {

//         if(!root) return true;
//         bool res = isValidBST(root->left, prev);
//         if(prev < root->val){
//             prev = root->val;
//         } else {
//             return false;
//         }
        
//         return res && isValidBST(root->right, prev);
//     }
// };

// COPIED
// class Solution {
// public:
//     bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX){ 
//        if(root == NULL)
//            return true;
//        if((root->val >= max) || (root->val <= min))
//            return false;
//        else
//            return isValidBST(root->left,min,root->val) &&  isValidBST(root->right,root->val,max);
//    }
//  };