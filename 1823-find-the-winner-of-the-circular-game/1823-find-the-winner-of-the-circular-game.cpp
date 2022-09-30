class Solution {
public:
    int answer(vector<int> &vec, int i, int k){
        
        if(vec.size()==1)
            return vec[0];
        
        int del_pos = (i+k-1)%vec.size();
        vec.erase(vec.begin()+del_pos);
        
         return answer(vec, del_pos, k);
    }
    int findTheWinner(int n, int k) {
        
        vector<int> v(n);
        
        for(int i=0; i<n; i++){
            v[i] = i+1;
        }
        
       return answer(v, 0, k);
        
    }
    
};