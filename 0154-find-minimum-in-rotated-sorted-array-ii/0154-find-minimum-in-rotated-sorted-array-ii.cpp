class Solution {
public:
    
    
    
    int findPeak(vector<int> nums) {

        int s = 0;
        int e = nums.size() - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            // four cases for peak

            if (mid < e && nums[mid] > nums[mid + 1]) // handle array cannot exceed its length
                return mid;
            if (mid > s && nums[mid] < nums[mid - 1]) // mid previous value is greater than mid
                return mid - 1;

            // Here only this conditions are checked if duplicate found
            // It might be case of mid==start and mid==end then Just skips duplicate using
            // s++ and e--
            // before skipping firstly we check if thats skipped value can be a pivot so
            // check

            if (s!=e && nums[mid] == nums[s] && nums[mid] == nums[e]) {
                if (nums[s] >= nums[s + 1])
                    return s;
                s++;

                if (nums[e] < nums[e - 1])
                    return e - 1;
                e--;
            }
            // left side is sorted, So pivot should be in right
            else if (s!=e && (nums[s] <= nums[mid]) || (nums[s] == nums[mid] && nums[e] <= nums[mid])) {
                s = mid + 1;
            } 
            else if(s==e){
                return mid;
            }
            
            else
                e = mid - 1;
        }

        return -1;
    }
    int minElement(vector<int> nums, int s, int e){
        int min = nums[s];
        
        for(int i=s+1; i<=e; i++){
            if(min > nums[i])
                min = nums[i];
        }
        return min;
    }
    int findMin(vector<int>& nums) {
    
        
        //1. find peak element
        //2. nums[peak]+1 is smallest element in right side and in left side smallest is nums[0]
        
       int pivot = findPeak(nums);
        
        int s = 0;
        int e = nums.size()-1;
        
      
        
        if(pivot!=-1){
            if(pivot == s){
                return minElement(nums, pivot+1, e);
            }
            if(pivot == e){
                return minElement(nums, s, pivot-1);
            }
            else{
                 int left = minElement(nums, 0, pivot);
                 int right = minElement(nums, pivot+1, nums.size()-1);
                
                if(left<right)
                    return left;
                else
                    return right;

            }

        }
        
        return nums[0];
        
    }
    
};