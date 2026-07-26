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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>ma;
        for(int i=0;i<inorder.size();i++){
            ma[inorder[i]]=i;
        }
        TreeNode* root=f(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,ma);
        return root;
    }
    TreeNode* f(vector<int>& preorder,int i,int m, vector<int>& inorder,int j,int n,map<int,int>&ma){
        if(i>m || j>n)return NULL;
        TreeNode* root=new TreeNode(preorder[i]);
        int inroot=ma[root->val];
        int numsval=inroot-j;
        root->left=f(preorder,i+1,m+numsval,inorder,j,inroot-1,ma);
        root->right=f(preorder,i+numsval+1,m,inorder,inroot+1,n,ma);
        return root;
    }
};
