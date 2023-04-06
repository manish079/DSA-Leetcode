class Solution
{
    public:
        int findPairs(vector<int> &nums, int k)
        {
          int i=0, j=1;
          set<pair<int, int>> sp;
            
            sort(nums.begin(), nums.end());
            
            while(j<nums.size()){
                int sub = nums[j]-nums[i];
                //We found a pair
                if(sub == k){
                   
                    pair p = make_pair(nums[i], nums[j]);
                    sp.insert(p);  //unique pair
                    i++;
                    j++;
                }
                else if(sub < k){
                    j++;
                }
                else 
                    i++;
                
                if(i == j)
                    j++;
            }
            return sp.size();
        }
};