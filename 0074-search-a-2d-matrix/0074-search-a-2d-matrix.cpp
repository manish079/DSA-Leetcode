class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //we consider whole matrix as a 1D array and applying normal binary search
        //after mid we find row and column index of that mid
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int s = 0, e = m*n-1;
        
        while(s <= e){
            int mid = s+(e-s)/2;
            
            int row = mid / n;
            int col = mid % n;
            
            if(matrix[row][col] == target)
                return true;
            else if(matrix[row][col] < target)
                s = mid+1;
            else
                e = mid-1;
        }
        
        return false;
        
    }
};