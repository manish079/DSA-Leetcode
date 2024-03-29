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
    bool findTarget(TreeNode* root, int k) {
        //O(N) and space is O(N)
        
        
        
        vector<int> vec;
        
        inorder(root, vec);
        
        //Now simply question trasnform in simple 2 sum problem
        
        int i=0, j=vec.size()-1;
        
        while(i<j){
            if(vec[i]+vec[j]==k){
                return true;
            }
            else if((vec[i]+vec[j]) < k){
             i++;   
            }
            else{
                j--;
            }
        }
        return false;
    }
};