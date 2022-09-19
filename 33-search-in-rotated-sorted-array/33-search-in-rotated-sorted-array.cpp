class Solution {
public:
    
   
    int search(vector<int>& nums, int target) {
        
        //Brute force o(n)
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==target){
        //         return i;
        //     }
        // }
        // return -1;    
        
        //Optimize using Binary Search
       
        
        int s=0;
        int e = nums.size()-1;
        
        
         while(s<=e){
            int mid = (s+e)>>1;
            
            if(nums[mid]==target)
                return mid;
            
            //array left part 0 to pivot
            if(nums[s] <= nums[mid]){
                 if(target >= nums[s] && target <= nums[mid])
                     e = mid-1;
                else
                    s = mid+1;
            }
            else{
                //right part of pivot pivot to end-1
                if(target >= nums[mid] && target <= nums[e])
                    s = mid+1;
                else
                    e = mid-1;
            }
        }
        return -1;
        
    }
};