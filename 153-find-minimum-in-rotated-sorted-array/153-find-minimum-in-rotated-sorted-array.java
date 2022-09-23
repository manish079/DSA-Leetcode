class Solution {
    public int findMin(int[] nums) {
        
        int pivot = findPivot(nums);
        int s = 0;
        int e = nums.length-1;
        
        if(pivot!=-1){
            if(pivot==e){
              return minElement(nums, s, pivot-1);
            }
            else if(pivot==s){
                return minElement(nums, pivot+1, e);
            }
            else{
              int left_min =  minElement(nums, s, pivot-1);
               int right_min = minElement(nums, pivot+1, e);
                
                return Math.min(left_min, right_min);

            }
        }
        else{
            return nums[s];
        }
        
    }
    static int minElement(int[] nums, int s, int e){
        int min = nums[s];
        
        for(int i=s+1; i<=e; i++){
            if(min > nums[i])
                min = nums[i];
        }
        return min;
    }
    
    static int findPivot(int[] nums){
        
         int s = 0;
        int e = nums.length - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // four cases for peak

            if (mid < e && nums[mid] > nums[mid + 1]) // handle array cannot exceed its length
                return mid;
            if (mid > s && nums[mid] < nums[mid - 1]) // mid previous value is greater than mid
                return mid - 1;
            if (nums[s] >= nums[mid])
                e = mid - 1;
            else
                s = mid + 1;
        }

        return -1;
    }
}