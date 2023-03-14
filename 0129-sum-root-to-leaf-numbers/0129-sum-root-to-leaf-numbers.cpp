/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int solve(TreeNode *root, int curr_val)
        {
            if (root == NULL) return 0;

            curr_val = curr_val *10 + root->val;

            //found root to leaf node
            if (!root->left && !root->right)
                return curr_val;

            int left_sum = solve(root->left, curr_val);
            int right_sum = solve(root->right, curr_val);

            return (left_sum + right_sum);
        }
    int sumNumbers(TreeNode *root)
    {

        return solve(root, 0);
    }
};