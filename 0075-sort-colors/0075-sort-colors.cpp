class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {

           	//National dutch flag algo

            int i = 0, start = 0, j = nums.size() - 1;

            while (i <= j)
            {
                if (nums[i] == 0)
                {
                    swap(nums[start], nums[i]);
                    start++;
                    i++;
                }
                else if (nums[i] == 1)
                {
                    i++;
                }
                else if (nums[i] == 2)
                {
                    swap(nums[i], nums[j]);
                    j--;
                }
            }
        }
};