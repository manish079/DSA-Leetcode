class Solution {
public:
    int findNumbers(vector<int>& nums) {
//         int ans = 0;
//         for(int i=0; i<nums.size(); i++){
          
//             int n = nums[i];
//             int cnt = 0;
            
//             while(n>0){
//                 int rem = n%10;
//                 cnt++;
//                 n/=10;
//             }
//             if(cnt%2==0){
//                 ans++;
//             }
//         }
//         return ans;
        
        
        
        int count = 0;
        
        for(int i=0; i<nums.size(); i++){
            if((nums[i]>9 && nums[i]<100) || (nums[i]>999 && nums[i]<10000) || (nums[i]==100000)){
                count++;
            }
                
        }
        return count;
        
    }
};