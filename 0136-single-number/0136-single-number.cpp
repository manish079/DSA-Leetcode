class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> map;
        
        if(nums.size()==1){
            return nums[0];
        }
        
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        
        for(auto it : map){
            if(it.second==1){
                return it.first;
            }
        }
        return 0;
        
    }
};