class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        stack<TreeNode*>st1,st2;
        st1.push(root);
        vector<vector<int>>res;
        while(!st1.empty()){
            vector<int>t;
            while(!st1.empty()){
                 TreeNode*p=st1.top();
                 st1.pop();
                  t.push_back(p->val);
                  if(p->left)st2.push(p->left);
                  if(p->right)st2.push(p->right);
            }
            if(t.size()) res.push_back(t);
            t={};
            while(!st2.empty()){
                 TreeNode*p=st2.top();
                 st2.pop();
                  t.push_back(p->val);
                  if(p->right)st1.push(p->right);
                  if(p->left)st1.push(p->left);
            }
            if(t.size()) res.push_back(t);
        }
        return res;
    }
};