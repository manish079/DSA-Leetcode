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
    public int minDiffInBST(TreeNode root) {
       List<Integer> list = new ArrayList<>();   
        inorder(root, list);
        int min = Integer.MAX_VALUE;
        for (int i = 1; i < list.size(); i++) {
            int dif = Math.abs(list.get(i - 1) - list.get(i));
            if (min > dif) 
                min = dif;
        }
        return min;   
    }
      static public void inorder(TreeNode root, List<Integer> list) {
      
        if(root==null)
            return;
        inorder(root.left, list);
                list.add(root.val);
        inorder(root.right, list);
    }
}