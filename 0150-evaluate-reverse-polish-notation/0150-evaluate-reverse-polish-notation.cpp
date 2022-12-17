class Solution {
public:
    int evalRPN(vector<string>& tokens) {
     
        
        //using unordered_map lambda
        
        unordered_map<string, function <int(int a, int b)>> m ={
            {"+", [](int a,int b) {return a+b;}},
            {"-", [](int a,int b){return a-b;}},
            {"*", [](int a,int b){return long(a)*long(b);}},
            {"/", [](int a,int b){ return a/b;}},
        };
        
        
        stack<int> s;
        
        
        for(string &token:tokens){
            if(token=="+" || token=="-" || token=="*" || token=="/"){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                
                
                
                int ans = m[token](a,b);
                
                s.push(ans);
            }
            else
                s.push(stoi(token));
        }
        return s.top();
    }
};