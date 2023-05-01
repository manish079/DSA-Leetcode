class Solution
{
    public:
        double average(vector<int> &salary)
        {
            int mini = INT_MAX;
            int maxi = INT_MIN;

            for (int i = 0; i < salary.size(); i++)
            {
                mini = min(mini, salary[i]);
                maxi = max(maxi, salary[i]);
            }
            int sum = 0;
            int cnt = 0;
            
            for (int i = 0; i < salary.size(); i++)
            {
                if (salary[i] != mini && salary[i] != maxi)
                {
                    sum += salary[i];
                    cnt++;
                }
            }
            return sum / (double) cnt;
        }
};