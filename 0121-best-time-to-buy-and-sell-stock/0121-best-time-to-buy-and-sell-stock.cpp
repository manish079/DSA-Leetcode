class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       // Bruteforce take O(N2)
        
        //Optimize
        
        int curr = 0, next = 1;
        int profit = 0;
        
        while(next < prices.size()){
            if(prices[curr] < prices[next]){
                profit = max(prices[next]-prices[curr], profit);
            }
            else{
                curr = next;
            }
            next++;
        }
        
        return profit;
        
    }
};