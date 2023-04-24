class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
                
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            
            int x = stones.back();
            stones.pop_back();
            int y = stones.back();
            stones.pop_back();
            
            stones.push_back(abs(x-y));
        }
        
        return stones[0];
    }
};