class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        
        //Using sliding window
        
        int n = nums.size();
        unordered_set<int> s;
        
        int i=0, j=0;
        
        while(j<=n-1){
            
            if(abs(i-j)<=k){
                if(s.find(nums[j]) != s.end()){
                    return true;
                 }
                s.insert(nums[j]);
                j++;
            }
            else{
                s.erase(nums[i]);
                i++;
            }
            
        }
        
        return false;
    }
};