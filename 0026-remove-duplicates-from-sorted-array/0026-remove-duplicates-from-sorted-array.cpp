class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        set<int> s;
        
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        
        int i=0;
        
        //according question also changes do in nums vector
        for(auto it:s){
            nums[i] = it;
            i++;
        }
        
        return s.size();
    }
};