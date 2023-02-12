class Solution
{
    public:
        int minSubArrayLen(int target, vector<int> &nums)
        {

           	//using two pointer approach in O(n)
            int mini = INT_MAX;
            int sum = 0;
            // bool flag = false;

            int i = 0, j = 0;

            while (j < nums.size())
            {
                sum += nums[j++];

                //reducing size of window
                while (sum >= target)
                {
                    mini = min(mini, j - i);
                   	//search more possible answer
                    sum -= nums[i++];
                    // flag = true;
                }
            }

            // return flag ? mini : 0;
              return mini==INT_MAX? 0 : mini;
        }
};