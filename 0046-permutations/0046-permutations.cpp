class Solution {
public:
      void permutation(vector<int> nums, int i, int j, vector<vector<int>> &ans){
        
        
        if(i==j){
            ans.push_back(nums);
            return;
        }
        
        for(int x=i; x<=j; x++){
           swap(nums[x], nums[i]);
            permutation(nums, i+1, j, ans);
           swap(nums[x], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
          
        int i = 0;
        int j=nums.size()-1;
        
       vector<vector<int>> ans;
        
        permutation(nums, i, j, ans);
        return ans;
        
    }
};