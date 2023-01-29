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
    TreeNode* searchBST(TreeNode* root, int val) {
        
            
        while(root!=NULL){
            if(val == root->val){
                return root;
            }
            else if(val < root->val){  //compare val with root->val
                if(root->left!=NULL){
                    root=root->left;
                }
                else{
                    root = root->right;
                }
            }
            else {
                if(root->right!=NULL){
                    root=root->right;
                }
                else{
                    root = root->left;
                }
            }
           
        }
        return NULL;
        
        
    }
};