class Solution {
public:
    int binarySearch(vector<int> &nums, int s, int target){
        
        int e = nums.size()-1;
        
        while(s<=e){
            int mid = (s+e)/2;
            
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return -1;
        
    }
    int findPairs(vector<int>& nums, int k) {
        
        
        set<pair<int, int>> sp;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
            int x = nums[i] + k;
            if(binarySearch(nums, i+1, x) != -1){
                sp.insert({nums[i], x});
            }
        }
        return sp.size();
    
    }
};