class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        
        
        //using cyclic sort 
        
        int i=0;
        while(i<nums.size()){
            int correctPos = nums[i];
            if( nums[i] < nums.size() && nums[i] != nums[correctPos]){
                swap(nums[correctPos], nums[i]);
            }
            else{
                i++;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
};