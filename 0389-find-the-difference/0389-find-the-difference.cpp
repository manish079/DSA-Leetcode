class Solution {
public:
    char findTheDifference(string s, string t) {
       
        unordered_map<char, int> mapp;
        
        for(int i=0; i<s.size(); i++)
            mapp[s[i]]++;
        for(int i=0; i<t.size(); i++)
            mapp[t[i]]++;
        
        for(auto it:mapp){
            if(it.second%2!=0)
                return it.first;
        }
        return NULL;
    }
};