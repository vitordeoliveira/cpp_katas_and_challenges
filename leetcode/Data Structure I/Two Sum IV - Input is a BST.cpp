// 653. Two Sum IV - Input is a BST
// Easy
// 5.7K
// 240
// Companies
// Given the root of a binary search tree and an integer k, return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.

// Example 1:

// Input: root = [5,3,6,2,4,null,7], k = 9
// Output: true
// Example 2:

// Input: root = [5,3,6,2,4,null,7], k = 28
// Output: false

#include <vector>

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// class Solution
// {
// private:
//     std::vector<int> list;

// public:
//     void inorderFill(TreeNode *root)
//     {
//         if (!root)
//             return;

//         inorderFill(root->left);
//         list.push_back(root->val);
//         inorderFill(root->right);
//     };

//     bool findTarget(TreeNode *root, int k)
//     {
//         inorderFill(root);
//         for (int x = 0; x < list.size(); x++)
//         {
//             for (int y = (x + 1); y < list.size(); y++)
//             {
//                 int sum = list[x] + list[y];
//                 if (sum == k)
//                     return true;
//             }
//         }

//         return false;
//     }
// };

class Solution {
private:
    std::vector<int> list;
public:
    void BST(TreeNode* root){
        if(!root) return;

        BST(root->left);
        list.push_back(root->val);
        BST(root->right);
    };

    bool findTarget(TreeNode* root, int k) {
        BST(root);
        int x = 0, y = list.size()-1;

        while(x < y){
            int sum = list[x] + list[y];

            if(sum == k) return true;

            if(sum < k){
                x++;
            } else {
                y--;
            }
        }

        return false;
    }
};