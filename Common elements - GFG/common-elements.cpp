//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
        {
             vector<int> result;
             vector<int> ans;
                int i = 0, j = 0, k = 0;
                
                while (i < n1 && j < n2 && k < n3) {
                    if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                        result.push_back(arr1[i]);
                        i++;
                        j++;
                        k++;
                    } else if (arr1[i] < arr2[j]) {
                        i++;
                    } else if (arr2[j] < arr3[k]) {
                        j++;
                    } else {
                        k++;
                    }
                }
    
                //arr = 3,3,1,2  arr2 = 3 3 4 5  arr3 = 3 3 6 7
                // 3 3 duplicate
                
                set<int>s;
                for(int i=0; i<result.size(); i++)
                    s.insert(result[i]);
                for(auto it = s.begin(); it!=s.end(); it++)
                    ans.push_back(*it);
                return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends