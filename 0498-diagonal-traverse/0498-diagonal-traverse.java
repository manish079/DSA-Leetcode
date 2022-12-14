class Solution {
    public int[] findDiagonalOrder(int[][] mat) {
        if(mat == null || mat.length == 0 || mat[0].length == 0)
            return new int[0];
        
        int totalRows = mat.length;
        int totalCols = mat[0].length;
        
        //to store the answer
        int ans[] = new int[totalRows * totalCols];
        
        int row = 0;
        int col = 0;
        
        for(int i=0 ; i<ans.length; i++)
        {
            ans[i] = mat[row][col];
            if((row+col)%2==0)
            {
                if(col == totalCols-1) row++;
                else if(row == 0) col++;
                else
                {
                    row--;
                    col++;
                }
            }
            else
            {
                if(row == totalRows-1) col++;
                else if(col == 0) row++;
                else
                {
                    row++;
                    col--;
                }
            }
        }
        return ans;
    }
}