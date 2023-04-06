class Solution
{
    public:
        int findPairs(vector<int> &nums, int k)
        {
            int count = 0;
            set<pair<int, int>> sp;
            
            sort(nums.begin(), nums.end());
            
            for (int i = 0; i < nums.size() - 1; i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if ((abs(nums[i] - nums[j]) == k))
                    {
                       pair p = make_pair(nums[i], nums[j]);
                       sp.insert(p);
                    }
                }
            }
            return sp.size();
        }
};