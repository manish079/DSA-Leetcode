class Solution
{
    public:
        bool isPossibleAns(vector<int> &vec, int mid, int days)
        {
            int d = 1;
            int sum = 0;

            for (int i = 0; i < vec.size(); i++)
            {
                if ((sum + vec[i]) > mid)
                {
                    d++;
                    sum = vec[i];
                }
                else
                    sum += vec[i];
            }
            if (d <= days)
            {
                return true;
            }
            return false;
        }
    int shipWithinDays(vector<int> &weights, int days)
    {

        if (days > weights.size())
            return -1;

        int e = 0;

        for (int i = 0; i < weights.size(); i++)
            e += weights[i];

        int s = *max_element(weights.begin(), weights.end());

        int ans = -1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (isPossibleAns(weights, mid, days))
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return ans;
    }
};