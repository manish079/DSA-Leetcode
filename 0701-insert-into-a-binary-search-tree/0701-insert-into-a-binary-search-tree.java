/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode insertIntoBST(TreeNode root, int val) {
        
        TreeNode ptr = root;
        TreeNode node = new TreeNode(val);
        
        if(root==null){
            root = node;
            return root;
        }
        
        while(ptr!=null){
            
            if(ptr.val < val){
                if(ptr.right == null){
                    ptr.right = node;
                    return root;
                }
                else{
                    ptr = ptr.right;
                }
            }
            else {
                if(ptr.left == null){
                    ptr.left = node;
                    return root;
                }
                else{
                    ptr = ptr.left;
                }
            }
          
        }
        return root;
    }
}