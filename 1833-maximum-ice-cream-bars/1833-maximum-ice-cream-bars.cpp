class Solution
{
    public:
        int maxIceCream(vector<int> &costs, int coins){
            
            //without using sorting
            
            vector<int> hash(100001, 0);
            int ans=0;
            
            //fill elements inside hash 
            for(int i=0; i<costs.size(); i++){
                hash[costs[i]]++;
            }
            
            int i=0;
            while(i<100001 && coins >= i){
                
                
                  
                //If coins remaining but can't buy all icecream just I check can I buy 1 or2 or3..
                if((long)hash[i]*i > coins && coins>=i){
                    
                    int less = coins/i;
                    coins = coins-less*i;
                    ans+=less;
                    break;
                }
                
              
                // hash[i]*i <= coins
                if(hash[i]!=0 && coins>=0){
                    
                    coins = coins-hash[i]*i;
                    ans+=hash[i];
                }
              
                
                i++;
            }
            
            return ans;
            
    }

            
};