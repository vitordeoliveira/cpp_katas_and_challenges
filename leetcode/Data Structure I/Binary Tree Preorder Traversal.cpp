// 94. Binary Tree Inorder Traversal
// Easy
// 10.9K
// 535
// Companies
// Given the root of a binary tree, return the inorder traversal of its nodes' values.

 

// Example 1:


// Input: root = [1,null,2,3]
// Output: [1,3,2]
// Example 2:

// Input: root = []
// Output: []
// Example 3:

// Input: root = [1]
// Output: [1]

#include <vector>
using namespace std;

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
private:
    vector<int> res;
public:
    vector<int> preorderTraversal(TreeNode* root) {
        fillres(root);
        return res;
    }

    void fillres(TreeNode* root){
        if (root == NULL) return;
 
        /* then print the data of node */
        res.push_back(root->val);
        /* first recur on left child */
        fillres(root->left);
        /* now recur on right child */
        fillres(root->right);
    }
};

class Solution2 {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        fillres(root, res);
        return res;
    }

    void fillres(TreeNode* root, vector<int> &res){
        if (root == NULL) return;
 
        res.push_back(root->val);
        fillres(root->left, res);
        fillres(root->right, res);
    }
};