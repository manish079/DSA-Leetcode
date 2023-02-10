//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
     unordered_map<char, int> mapp;
     
     for(int i=0; i<s.size(); i++)
        mapp[s[i]]++;
    
      
      int temp = s.size();  // for getting smallest number of character
 
      
      for(auto it : mapp){
         if(it.first == 'b' || it.first=='a' || it.first=='n')
            temp = min(temp, it.second);
        else if(it.first=='l' || it.first == 'o')  // double charcter case
            temp=min(temp, (it.second/2));
      }
      return temp;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends