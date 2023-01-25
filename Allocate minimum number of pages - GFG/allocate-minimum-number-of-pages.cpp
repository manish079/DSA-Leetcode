//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isAllocatedPages(int A[], int n, int mid, int M){
        
        int sum = 0, piece=1; // min array divided into M=1 piece
        
        for(int i=0; i<n; i++){
            //divided array into m student
            if(sum+A[i] > mid){
                piece++;
                sum = A[i];
            }
            else{
                sum+=A[i];
            }
        }
        
        //If array divided piece are greate to M then We cannot be allocate to pages 
        if(piece > M){
            return false;
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        
        int left, right, sum=0, max=INT_MIN;
        int min_pages=-1;
        
        //edge case
        if(M > N)
            return min_pages;
        
        for(int i=0; i<N; i++){
            sum+=A[i];
            if(max < A[i])
                max = A[i];
        }
        left = max;
        right = sum;
        
    
        
        while(left<=right){
            int mid = (left+right)/2;
            
            if(isAllocatedPages(A, N, mid, M)){
                min_pages = mid;  //It may be possible answer
                right = mid-1;
            }
            else
                left = mid+1;
        }
        return min_pages;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends