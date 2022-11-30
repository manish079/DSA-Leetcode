class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        
        unordered_map<int, int> m;
        unordered_set<int> s;
        
        int n = arr.size();
        
        //insert data in map for occurence
       for(int i=0; i<n; i++)
           m[arr[i]]++;
        
        for(auto it:m){
            int occ = it.second;
            
            if(s.find(occ)!=s.end())
                return false;
            s.insert(occ);
        }
        return true;
      
        
        
    }
};