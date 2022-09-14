class Solution {
public:
    int ceil_index(vector<int> &nums, int s, int e, int target){
        
        // if(nums[e] < target)
        //     return -1;
        
         while(s<=e){
            int mid = s + (e-s)/2;
            
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                s = mid+1;
            else
                e = mid-1;
        }
        return s;
    }
    int searchInsert(vector<int>& nums, int target) {
        
        int index = ceil_index(nums,0, nums.size()-1, target);
        
        return index;
    }
    
};