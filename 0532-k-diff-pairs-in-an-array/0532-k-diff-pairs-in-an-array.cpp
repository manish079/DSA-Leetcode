class Solution {
public:
    bool binary(vector<int>& nums,int s,int e,int t){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==t){
                return true;
            }
            else if(nums[mid]<t){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(i==0||nums[i]!=nums[i-1]){
            int t=nums[i]+k;
            if(binary(nums,i+1,n-1,t)){
                c++;
            }
            }
        }
        return c;
    }
};