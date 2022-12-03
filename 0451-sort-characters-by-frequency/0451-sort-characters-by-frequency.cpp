class Solution {
public:
   
    string frequencySort(string s) {
        
        unordered_map<char, int> m;
        vector<pair<int , char>> v; // for storing frequency
        //count frequency of character
        for(int i=0; i<s.length(); i++)
            m[s[i]]++;
        
        for(auto it : m){
            v.push_back({it.second, it.first});
        }
        
        sort(v.begin(), v.end());
        string ans = "";
        
        for(auto it: v){
            for(int i=0; i<it.first; i++){
                ans.push_back(it.second);
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;         
    }
};