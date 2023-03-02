class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     
        vector<int> ans;
        unordered_map<int, int> mapp;
        
        for(int i=0; i<nums.size(); i++){
            mapp[nums[i]]++;
            
        }
        for(auto &it : mapp){
            if(it.second > nums.size()/3)
                ans.push_back(it.first);
        }
        return ans;
    }
};