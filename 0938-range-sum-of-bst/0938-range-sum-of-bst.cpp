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
    void preOrder(TreeNode *ptr, vector<int> &vec){
        if(ptr!=NULL){
            vec.push_back(ptr->val);
            preOrder(ptr->left, vec);
            preOrder(ptr->right, vec);
        }
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        
        TreeNode *ptr = root;
        vector<int> vec;
        
        preOrder(root, vec);
        
        
        int sum = 0;
        for(int i=0; i<vec.size(); i++){
            if(vec[i] >= low && vec[i] <= high){
                sum += vec[i];
            }
        }
        return sum;
        
    }
};