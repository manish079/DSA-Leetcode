class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> s;
        
        int i = 0, j = 0;
        
        while(i < pushed.size() && j < popped.size()){
            
            s.push(pushed[i]);
            
            while(!s.empty() && j<pushed.size() && s.top() == popped[j]){
                s.pop();
                j++;
            }
               i++;
        }
       
        return s.empty();
    }
};