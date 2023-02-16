/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
    int maxDepth(TreeNode *root)
    {

        if (root == NULL)
            return 0;

    
            int max_val = maxDepth(root->left);
            int min_val = maxDepth(root->right);

            return max(max_val, min_val)+1;
       
    }
};