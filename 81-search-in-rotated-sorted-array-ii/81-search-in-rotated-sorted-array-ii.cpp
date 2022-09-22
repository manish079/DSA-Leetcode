class Solution {
public:
    bool search(vector<int>& nums, int target) {
     
        
        int s=0;
        int e = nums.size()-1;
        
        
         while(s<=e){
            int mid = (s+e)>>1;
            
            if(nums[mid]==target)
                return true;
            
            //array left part 0 to pivot
            if(nums[s] <= nums[mid]){
                 if(target >= nums[s] && target <= nums[mid])
                     e = mid-1;
                
                //if mid and start are same then just do move start by 1 position right side
                else if(nums[mid]==nums[s]){
                    s = s+1;
                }
                else
                    s = mid+1;
            }
            else{
                //right part of pivot pivot to end-1
                if(target >= nums[mid] && target <= nums[e])
                    s = mid+1;
                 //if mid and right are same then just do move end by 1 position left side
                else if(nums[mid] == nums[e])
                    e--;
                else
                    e = mid-1;
            }
        }
        return false;
        
        
    }
};