class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<bool> indegree(n, false);
        
        for(int i=0; i<edges.size(); i++){
            
            int edge = edges[i][0];
            int vertex = edges[i][1];
            
            indegree[vertex] = true;
        }
        
        vector<int> ans;
        
        for(int i=0; i<indegree.size(); i++){
            if(indegree[i] == false)
                ans.push_back(i);
            
                
        }
        return ans;
    }
};