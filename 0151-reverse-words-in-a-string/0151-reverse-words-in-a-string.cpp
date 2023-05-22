class Solution {
public:
  
  string reverseWords(string str) {
      
    string ans = "";
    stack<string> s;

     int i = 0;
    string temp = "";


    while(i<str.length()){
        
        
      if(str[i] == ' ' ){
          if(temp.length() >= 1)
               s.push(temp);
        temp = "";
      }
      else{
        temp += str[i];
      }
      i++;
    }
    ans += temp;
      
    while (!s.empty()){
        ans +=" " +s.top();
        s.pop();
    }
      if(ans.length() != 0 && ans[0] == ' '){
          ans = ans.substr(1, ans.length()+1);
      }
  
      
      return ans;
  }
};