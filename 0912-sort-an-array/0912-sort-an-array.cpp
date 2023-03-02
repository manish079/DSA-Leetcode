class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        //counting sort
        //tc:- O(N + K)
        
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        
        unordered_map<int, int> mp;
        
        for(int i=0; i<nums.size(); i++)  // O(N)
            mp[nums[i]]++;
        
        int ind = 0;
        for(int i=min; i<=max; i++){   // O(K)
            
            //count > 0 elements
            while(mp[i] > 0){
                nums[ind] = i;
                mp[i]--;  //frequency decrease
                ind++;
            }
            
        }
        return nums;
    }
};