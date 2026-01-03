class Solution {
public:
    void inorder(TreeNode* root, vector<int> &vc){
        if(root!=nullptr){
            inorder(root->left, vc);
            vc.push_back(root->val);
            inorder(root->right,vc);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        return res;
    }
};