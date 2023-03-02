class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        
        sort(nums.begin(), nums.end());
             
       for(int i=0; i<nums.size()-1; i++){
           if(nums[i]==nums[i+1]){
               count++;
               
               if(count > nums.size()/2)
                   return nums[i];
           }
           else{
               count = 1;
           }
       }
             return 1;
    }
};