/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        reach(root,diameter);
        return diameter;
    }
     int reach(TreeNode* root, int &diameter) {
        if(root == NULL) return 0;
        int ld = reach(root->left, diameter);
        int rd = reach(root->right, diameter);
        diameter=max(diameter,ld+rd);
        return max(ld,rd)+1;
    }
};