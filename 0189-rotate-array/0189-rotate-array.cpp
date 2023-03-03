class Solution {
public:
    void rotate(vector<int>&nums, int start, int end){
        
        while(start < end){
            int temp = nums[start];
            nums[start] =nums[end];
            nums[end] = temp;
            
            start++;end--;
        }
        
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%nums.size();
        
        rotate(nums, 0, n-k-1);
        rotate(nums, n-k, n-1);
        rotate(nums, 0, n-1);
    }
};