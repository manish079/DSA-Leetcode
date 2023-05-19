class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int, int> mapp;
        
        
        for(int i=0; i<nums.size(); i++){
            //If element is present in mapp then
            if(mapp.find(nums[i])!=mapp.end()){
                
                //check absolute difference i and j 
                if(abs(i - mapp[nums[i]]) <= k )
                    return true;
            }
            mapp[nums[i]] = i;
        }
        return false;
    }
};