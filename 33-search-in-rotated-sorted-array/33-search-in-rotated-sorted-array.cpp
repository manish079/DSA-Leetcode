class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        for(int rotate = 0; rotate<target; rotate++){
                if(rotate==target){
                    for(int i=0; i<nums.size()-1; i++){
                    int temp = nums[i];
                    nums[i]=nums[i+1];
                    nums[nums.size()-1] = temp;
                
                }
            }          
            
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;       
    }
};