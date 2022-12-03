class Solution {
public:
   
    string frequencySort(string s) {
        
        unordered_map<char, int> m;
        
        //count frequency of character
        for(int i=0; i<s.length(); i++)
            m[s[i]]++;
     
        
        priority_queue<pair<int, char>> pq;
        
        for(auto it : m){
            pq.push({it.second, it.first});
        }
        
        string ans = "";
        
        pair<int, char> curr;
        
        while(!pq.empty()){
            curr = pq.top();
            pq.pop();
            ans+=string(curr.first, curr.second);
        }
        return ans;
    }
};
