class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> vec;
        
        for(int i=0, j=i+n; i<n; i++, j++){
            vec.push_back(nums[i]);
            vec.push_back(nums[j]);
        }
        return vec;
    }
};