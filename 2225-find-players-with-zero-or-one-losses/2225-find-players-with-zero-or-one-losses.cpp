class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        vector<vector<int>> ans;
        
        vector<int> victory;
        vector<int> defeat;
        
        set<int> winner;
        set<int> looser;
        
        unordered_map<int, int> looser_cnt;
        int cnt=0;
        
        for(auto it:matches){
            winner.insert(it[0]);
            looser.insert(it[1]);
            
            looser_cnt[it[1]]++;
        }
        
        //for winner
       for(auto it:winner){
           if(looser_cnt.find(it)==looser_cnt.end()){
                victory.push_back(it);
           }
       }
        
        //for loose 1 match
        for(auto it:looser){
            if(looser_cnt[it]==1){
                defeat.push_back(it);
            }
        }
        
        ans.push_back(victory);
        ans.push_back(defeat);
        
        return ans;
        
       
    }
};