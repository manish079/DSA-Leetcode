class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        
        //Bruteforce
//         int n = gas.size();

//         for(int i = 0; i<n; i++) {
            
//             if(gas[i] < cost[i])
//                 continue;
            
//             int j = (i+1)%n;
            
//             int currGas = gas[i];
                
//             currGas = currGas - cost[i] + gas[j];
            
//             while(j != i) {
//                 if(currGas < cost[j])
//                     break;
                
//                 int cos = cost[j];
                
               
//                 j = (j+1)%n;
                
//                 int gasEarn = gas[j];
                
//                 currGas = currGas - cos + gasEarn;

//             }
            
//             if(i == j)
//                 return i;
//         }
//         return -1;
        
        
        //optimal:- greedy algo
        int gasSum=0, costSum=0;
        
        for(int i=0; i<gas.size(); i++){
            gasSum+=gas[i];
            costSum+=cost[i];
        }
        
        //Not proper unit of fuel
        if(gasSum < costSum)
            return -1;
        
        int tot = 0;
        int ans = 0;
        
        for(int i=0; i<gas.size(); i++){
            tot+=gas[i]-cost[i];
            
            //
            if(tot<0){
                tot = 0;
                ans = i+1;
            }
            else{
                continue;
            }
        }
        return ans;
        
    }
};