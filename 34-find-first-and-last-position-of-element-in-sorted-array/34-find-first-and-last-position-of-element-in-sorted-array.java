class Solution {
    
    public int[] searchRange(int[] nums, int target) {
        
        int[] arr = new int[2];
         arr[0] = binary_search(nums, target, "first");
        arr[1]= binary_search(nums, target, "last");
        
        return arr;
        
    }
    
    public static int binary_search(int[] nums, int target, String start){
        int s = 0;
        int e = nums.length-1;
        int ans = -1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
                ans = mid;
                
                if(start=="first"){
                    e = mid-1;
                }
                if(start=="last"){
                    s = mid+1;
                }
                
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
}