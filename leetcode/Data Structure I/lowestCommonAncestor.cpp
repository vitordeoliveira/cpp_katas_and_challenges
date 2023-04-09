#include <vector>
#include <set>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
private:
    vector<int> p_relatives;
    vector<int> q_relatives;
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        fillRelatives(root, p ,q);
        set<int> relatives;

        for(auto r : p_relatives){
            relatives.insert(r);
        }

        for(auto r : q_relatives){
            if(relatives.count(r)){
                return findTreeNode(root, r);
            }
        }

        return root;
    }

    TreeNode* findTreeNode(TreeNode* root, int val){
        if(!root) return root;
        if(val == root->val) return root;
        if(val < root->val){
            return findTreeNode(root->left, val);
        }
        else {
            return findTreeNode(root->right, val);
        }
    }

    void fillRelatives(TreeNode* root, TreeNode* p, TreeNode* q, vector<int> prev = {}) {
        if(!root) return;

        prev.push_back(root->val);

        if(p->val == root->val){
            p_relatives = prev;
            std::reverse(p_relatives.begin(), p_relatives.end());
        }

        if(q->val == root->val){
            q_relatives = prev;
            std::reverse(q_relatives.begin(), q_relatives.end());

        }

        if(!p_relatives.empty() && !q_relatives.empty()) return;

        fillRelatives(root->left, p ,q, prev);
        fillRelatives(root->right, p ,q, prev);
    }
};

int main(){
    Solution s;

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(5);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(4);

    s.lowestCommonAncestor(root, root->right, root->left);


}