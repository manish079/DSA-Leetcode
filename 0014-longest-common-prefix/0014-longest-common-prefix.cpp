class Solution
{
    public:
        string longestCommonPrefix(vector<string> &strs)
        {

            if (strs.empty()) return "";
        
          
            for (int i = 0; i < strs[0].size(); i++)
            {
                char c = strs[0][i];

               	// Check if the current character matches the corresponding character in each of the other strings
                for (int j = 1; j < strs.size(); j++)
                {
                    if (i >= strs[j].size() || strs[j][i] != c)
                    {
                        return strs[0].substr(0, i);	// Return the common prefix found so far
                    }
                }
            }

           
            return strs[0];
        }
};