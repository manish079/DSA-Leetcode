class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        vector<bool> indegree(n, false);
        
        //Idea:- is mark true those vertext whose indegree is 0 means they have any incoming edges
        // We incluses that vertices whose no incoming edge
        
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