class Solution
{
    public:
        int findDuplicate(vector<int> &nums) {
            
            int ans = -1;
            
            for(int i=0; i<nums.size(); i++){
                
                int ind = abs(nums[i]);
                
                //If found duplicate element
                if(nums[ind] < 0){
                    ans = ind;
                    break;
                }
                else{
                    //visited mark
                    nums[ind] *= -1; 
                }
            }
            return ans;
        }
};