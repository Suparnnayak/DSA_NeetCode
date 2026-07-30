class Codec {
public:

    string serialize(TreeNode* root) { 
        if(!root)return ""; 
        queue<TreeNode*>q; 
        q.push(root); 
        string s=""; 
        while(!q.empty()){ 
            TreeNode* node=q.front(); 
            q.pop(); 
            if(node==NULL)s.append("#,"); 
            else s.append(to_string(node->val)+','); 
            if(node!=NULL){ 
                q.push(node->left); 
                q.push(node->right); 
            } 
        } 
    return s; 
}
    TreeNode* deserialize(string data) {
        if (data.empty()) return NULL;
        stringstream ss(data);
        string str;
        getline(ss, str, ',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            getline(ss,str,',');
            if (str == "#") {
                node->left = NULL;
            } else {
                TreeNode* leftNode = new TreeNode(stoi(str));
                node->left = leftNode;
                q.push(leftNode);
            }
            getline(ss,str,',');
            if (str == "#") {
                node->right = NULL;
            } else {
                TreeNode* rightNode = new TreeNode(stoi(str));
                node->right = rightNode;
                q.push(rightNode);
            }
        }

        return root;
    }
};