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
        int s=0;
        height(root,s);
        return s;
    }
    int height(TreeNode* root,int &s){
        if(!root)return 0;
        int l=height(root->left,s);
        int r=height(root->right,s);
        s=max(s,r+l);
        return 1+max(l,r);    
        }
};