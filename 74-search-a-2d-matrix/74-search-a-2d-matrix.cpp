class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
       // for(int i=0; i<matrix.size(); i++){
       //     for(int j=0; j<matrix[i].size(); j++){
       //         if(matrix[i][j]==target)
       //          return true;
       //     }
       // }
       //  return false;
        
        int low=0, upper=matrix[0].size()-1;
        
        while(low<matrix.size() && upper>=0){
            
            if(target == matrix[low][upper])
                return true;
            if(target < matrix[low][upper]){
                upper--;
            }
            else
                low++;
        }
        
        return false;
    }
   
};