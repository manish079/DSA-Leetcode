class Solution {
public:
    string longestPalindrome(string s) {
        string longestPalindrome = "", currentPalindrome = "";
        int n = s.size();
        for (int i = 0; i < n && (n-i) > longestPalindrome.size(); i++)
        {
            for (int j = n - 1; j >= i && j >= longestPalindrome.size(); j--)
            {
                if (s[i] == s[j])
                {
                    int l = i, k = j;
                    int isPalindrome = true;
                    while (l <= k)
                        if (s[l++] != s[k--])
                            isPalindrome = false;
                    if (isPalindrome)
                    {
                        for (l = i; l <= j; l++)
                            currentPalindrome.push_back(s[l]);
                    }
                    if (currentPalindrome.size() > longestPalindrome.size())
                        longestPalindrome = currentPalindrome;
                    currentPalindrome.clear();
                }
            }
        }
        return longestPalindrome;
    }
};