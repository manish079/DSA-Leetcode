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
    
     int leftNodes(TreeNode *root){
        
        if(root==NULL)
            return 0;
        return leftNodes(root->left)+1;
     
        
    }
    int rightNodes(TreeNode *root){
          if(root==NULL)
            return 0;
        return rightNodes(root->right)+1;
    }
    
    int countNodes(TreeNode* root) {
        
         if(root==NULL)
            return 0;
        
        int lh = leftNodes(root);
        int rh = rightNodes(root);
        
        if(lh == rh){
            return (pow(2, lh)-1);
        }
        else{
            return countNodes(root->left)+countNodes(root->right)+1;
        }
        
    }
    
   
    
};