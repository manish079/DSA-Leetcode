//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
        
        int i = n-1;
        int j = m-1;
        int carry = 0;
        string str = "";
        
        while(i>=0 && j >= 0){
            
            int sum = carry+a[i]+b[j]; 
            str.push_back((sum%10) +'0');  //'0' append for convert digit into string
            carry = sum/10; 
            
            i--; j--;
             
        }
        //checking array 1 is not fully traversed
        while(i>=0){
            int sum = a[i]+0+carry;
            str.push_back((sum%10) + '0');
            carry = sum/10;
            i--;
        }
        //If arr 1 is completed and arr2 is not completed then
        while(j>=0){
            int sum = 0 + b[j] + carry;
            str.push_back((sum%10) + '0');
            carry = sum/10;
            j--;
        }
        
        //if carry is remaining(at last element carry has 10)
        if(carry){
            str.push_back(carry + '0');
        }
        
        //some test cases prefix zeros are ignored
        while(str[str.size()-1]=='0'){
            str.pop_back();
        }
        
        reverse(str.begin(), str.end());
        
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends