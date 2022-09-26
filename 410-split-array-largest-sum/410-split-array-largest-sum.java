class Solution {
    public int splitArray(int[] nums, int m) {
        int min_range=0;
        int max_range=0;
        
        for(int i=0; i<nums.length; i++){
            max_range+=nums[i];   
            min_range = Math.max(min_range, nums[i]);  //[start, end]
        }

        return binary_search(nums, min_range, max_range, m);
        
    }
    
    static int binary_search(int[] nums, int start, int end, int m){
         while (start <= end) {
            // try for the middle as potential ans
            int mid = start + (end - start) / 2;

            // calculate how many pieces you can divide this in with this max sum
            int sum = 0;
            int pieces = 1;
             
             if(start==end)
                 return end;
             
            for(int i=0; i<nums.length; i++) {
                if (sum + nums[i] > mid) {
                    // you cannot add this in this subarray, make new one
                    // say you add this num in new subarray, then sum = num
                    sum = nums[i];
                    pieces++;
                } else {
                    sum += nums[i];
                }
            }

            if (pieces > m) {
                start = mid + 1;
            } else {
                end = mid;
            }

        }
        return -1; // here start == end
    }

}