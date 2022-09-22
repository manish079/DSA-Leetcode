class Solution {
    public int search(int[] nums, int target) {

        int pivot = findPivot(nums);

        // if -1 return then array is normal array in sorted and just apply normal binary search
        if(pivot == -1){
            return binary_search(nums, 0, nums.length-1, target);
        }

        //If pivot found we get two ascendng array
        if(nums[pivot] == target)
            return pivot;
        if(target >= nums[0] && target <= nums[pivot])
            return binary_search(nums, 0, pivot-1, target);
        else
            return binary_search(nums, pivot+1, nums.length-1, target);

    }

    public static int findPivot(int[] nums) {

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

    public static int binary_search(int[] nums, int s, int e, int target) {

        while (s <= e) {
            int mid = (s + e) >> 1;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return -1;
    }
    
}