class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1 = str1.size(), s2 = str2.size();
        if (s1 < s2) 
            return gcdOfStrings(str2, str1);
        if (str2.empty()) 
            return str1;
        if (str1.substr(0, s2) != str2) 
            return "";
        return gcdOfStrings(str1.substr(s2), str2);
    }
};