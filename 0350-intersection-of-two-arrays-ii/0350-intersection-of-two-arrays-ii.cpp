class Solution
{
    public:
        bool isPresent(vector<int> &v, int ele)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == ele)
                {
                    v[i] = -1;
                    return true;
                }
            }
            return false;
        }
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        for (int i = 0; i < nums2.size(); i++)
        {
            if (isPresent(nums1, nums2[i]))
            {
                ans.push_back(nums2[i]);
            }
        }
        return ans;
    }
};