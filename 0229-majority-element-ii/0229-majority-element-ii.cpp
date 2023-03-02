class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {

           	//boyer moore majority voting algo

            int n = nums.size();
            int majParty1 = INT_MIN;
            int majParty2 = INT_MIN;
            int score1 = 0;
            int score2 = 0;

            for (int i = 0; i < n; i++)
            {

                if (nums[i] == majParty1)
                {
                    score1++;
                }
                else if (nums[i] == majParty2)
                {
                    score2++;
                }
                else if (score1 == 0)
                {
                    majParty1 = nums[i];
                    score1 = 1;
                }
                else if (score2 == 0)
                {
                    majParty2 = nums[i];
                    score2 = 1;
                }
                else
                {
                    score1--;
                    score2--;
                }
            }

           	//We got majority elements, but It may or may not be majority elements.
           	//So we can do verifying
           	//to check in vector and counts the occurence of majority elements

            int count1 = 0;
            int count2 = 0;
            
            for (int i = 0; i < n; i++)
            {
                if (majParty1 == nums[i])
                {
                    count1++;
                }
                else if (majParty2 == nums[i])
                {
                    count2++;
                }
            }

            vector<int> ans;

            if (count1 > n / 3)
            {
                ans.push_back(majParty1);
            }
            if (count2 > n / 3)
            {
                ans.push_back(majParty2);
            }

            return ans;
        }
};