class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
      
        int m=matrix.size();
        int n=matrix[0].size();
         vector<vector<int>> v(n,vector<int> (m)); // matrix creation
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                v[i][j] = matrix[j][i];
            }
        }
        return v;
    }
};