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
        TreeNode* insertIntoBST(TreeNode *root, int val)
        {
            
            //O(n) and space complexity O(1)
            TreeNode *node = new TreeNode(val);
            TreeNode *temp = root;
            
            if(root==NULL)
                return node;
            while (root != NULL)
            {
                if (val < root->val)
                {
                    if (root->left != NULL)
                        root = root->left;
                    else
                    {
                        root->left = node;
                        break;
                    }
                }
                else
                {
                    if (root->right != NULL)
                        root = root->right;
                    else
                    {
                        root->right = node;
                        break;
                    }
                }
            }
            return temp;
        }
};