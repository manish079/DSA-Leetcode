class Solution {
public:
    bool isPossibleAns(vector<int> nums, int k, int mid){
        int sum = 0, piece = 1; //minimum 1 partition will be in array
        
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i] > mid){
                sum = nums[i];     // Here array will be divided into subarray
                piece++;
            }
            else{
                sum+=nums[i];
            }
        }
        
        if(piece <= k){
            return true;
        }
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        
        int s = 0, e = 0;
        int ans = 0;
        
        for(int i=0; i<nums.size(); i++){
            e+=nums[i];
        }
        s = *max_element(nums.begin(), nums.end());
        
        while(s<=e){
            int mid = s+(e-s)/2;
            
            if(isPossibleAns(nums, k, mid)){
                ans = mid;
                e = mid-1;
            }
            else
                s = mid+1;
        }
        return ans;
    }
};