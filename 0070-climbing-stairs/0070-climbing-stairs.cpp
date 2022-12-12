class Solution {
public:
    
    int dp[46]={-1};
    
    int solve(int n){
        
        //memo
        
        if(n < 0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
            
        
        if(n==0){
            return 1;
        }
        int oneStep = solve(n-1);
        int twoStep=solve(n-2);
        
        return dp[n] = oneStep+twoStep;
    }
    int climbStairs(int n) {
        
        memset(dp, -1, sizeof(dp));
        return solve(n);
    }
};