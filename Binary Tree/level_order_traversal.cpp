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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int s = que.size();
            vector<int> temp;
            for(int i=0;i<s;i++){
                TreeNode* nn = que.front();
                que.pop();
                temp.push_back(nn->val);
                if(nn->left) que.push(nn->left);
                if(nn->right) que.push(nn->right);
            }
            res.push_back(temp);
        }
        return res;
    }
};