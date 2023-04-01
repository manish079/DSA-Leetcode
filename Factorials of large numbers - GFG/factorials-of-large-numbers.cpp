//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        
        
        int carry = 0;
        vector<int> ans;
        
        ans.push_back(1); //initially we stores 1 as a first value in vector
        
        for(int i = 2; i<=N; i++){
            
            for(int j = 0; j<ans.size(); j++){
                
                int res = ans[j] * i + carry;
               ans[j] = res%10;
                carry = res / 10;
            }
            
            //If carry remaining
            while(carry){
                ans.push_back(carry%10);
                carry /= 10;
            }
            
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
      
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends