class Solution {
    public boolean search(int[] nums, int target) {
        
        int s=0;
        int e = nums.length-1;
        
        
         while(s<=e){
            int mid = (s+e)>>1;
            
            if(nums[mid]==target)
                return true;
            
            //array left part 0 to pivot
            if(nums[s] <= nums[mid]){
                 if(target >= nums[s] && target <= nums[mid])
                     e = mid-1;
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
                else if(nums[mid] == nums[e])
                    e--;
                else
                    e = mid-1;
            }
        }
        return false;
        
    }
    
}