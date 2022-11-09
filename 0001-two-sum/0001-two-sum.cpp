class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //If array is sorted use two pointer approace
        // If not sort then use hash table
        
        vector<int> v;
        
        unordered_map<int, int> m;
        
        for(int i=0; i<nums.size(); i++){
            if(m.find(target - nums[i])!= m.end()){
                
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                
                return v;
            }
        
              m[nums[i]] = i;
            
        }
        return v;
    }
        
     
};