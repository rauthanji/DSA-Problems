class Solution {
public:
    void preorder(TreeNode* root, vector<int> &vc){
        if(root!=nullptr){
            vc.push_back(root->val);
            preorder(root->left, vc);
            preorder(root->right, vc);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder(root, res);
        return res;
    }
};