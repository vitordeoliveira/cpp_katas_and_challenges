// 102. Binary Tree Level Order Traversal
// Medium
// 12.4K
// 246
// Companies
// Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

 

// Example 1:


// Input: root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]
// Example 2:

// Input: root = [1]
// Output: [[1]]
// Example 3:

// Input: root = []
// Output: []

#include <vector>

using namespace std;

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
    int height(TreeNode* root){
        if(!root) return 0;

        int lefth = height(root->left);
        int righth = height(root->right);

        if(lefth > righth){
            return lefth+1;
        } else {
            return righth+1;
        }
    }

    void currentLevel(TreeNode* root, int curr, int level, vector<vector<int>> &res){
        if(!root) return;
        if(curr == 1){
            res[level-1].push_back(root->val);
            // res[level-1].push_back({root->val});
        } else if(level > 1){
            currentLevel(root->left, curr-1, level, res);
            currentLevel(root->right, curr-1, level, res);
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        int h = height(root);
        int i;
        vector<vector<int>> res(h);
        for (i = 1; i <= h; i++){
            currentLevel(root, i, i, res);
        }
        
        return res;
    }
};