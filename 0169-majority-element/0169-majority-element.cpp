class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> mapp;
        
        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]]++;
        }
        
        for(auto &it : mapp){
            int cond = nums.size()/2;
            
            if(it.second > cond)
                return it.first;
        }
        return 0;
    }
};