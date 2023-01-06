class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        
        int ans  = 0;
        
        sort(costs.begin(), costs.end());
        
        if(coins < costs[0])
            return 0;
        
        for(int i=0; i<costs.size(); i++){
          
            if(coins >= costs[i]){
                ans++;
                coins-=costs[i];
            }
        }
        return  ans;
    }
};