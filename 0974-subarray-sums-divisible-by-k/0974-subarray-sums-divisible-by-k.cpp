class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // int count = 0;
        // int sum = 0;
        
        //Brute force O(n^2)
        // for(int i=0; i<nums.size(); i++){
        //     sum=0;
        //     for(int j=i; j<nums.size(); j++){
        //         sum+=nums[j];
        //         if(sum%k==0)
        //             count++;
        //     }
        // }
        // return count;
        
        
          int n = nums.size();
        
        unordered_map<int, int> mp;
        int sum = 0;
        
        mp[0] = 1;
        
        int result = 0;
        
        for(int i = 0; i<n; i++) {
            sum += nums[i];
            
            int rem = sum%k;
            
            if(rem < 0) {
                rem += k;
            }
            
            if(mp.find(rem) != mp.end()) {
                result += mp[rem];
            }
            
            mp[rem]++;
            
        }
        
        return result;
    }
};