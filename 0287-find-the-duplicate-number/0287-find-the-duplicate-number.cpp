class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        // using XOR
        
        int s=1, e=nums.size()-1;  // bcoz arr is [1,n]
        
        while(s<=e){
            int mid = (s+e)/2;
            
            int count = 0;
            
            for(int i=0; i<nums.size(); i++){
                if(nums[i] <= mid){
                    count++;
                }
            }
            if(count <= mid)
                s = mid+1;
            else
                e = mid-1;
        }
        return s;
    }
};