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
    
    void inorder(TreeNode *root, vector<int> &vec){
        if(root!=NULL){
            inorder(root->left, vec);
            vec.push_back(root->val);
            inorder(root->right, vec);
        }
    }
    int minDiffInBST(TreeNode* root) {
      
        int small = INT_MAX;
        
        if(root==NULL) return 0;
        
        vector<int> vec;
        
        inorder(root, vec);
        
        for(int i=1; i<vec.size(); i++){
            
            int diff = abs(vec[i-1] - vec[i]);
            
            if(small > diff) small = diff;
            
        }
        
        return small;
        
        
    }
};