class Solution {
public:
    int tribonacci(int n) {
        
        
        //How I got idea:-
        
        // to understand question and example and I find a pattern
        // 
        
        // t3 = 0+1+1 = 2;
        // t4 = 1+1+2=4
        // t5 = 1+2+4=7
        // t6 = 2+4+7=13
        // upto size of n is 38
        
        
        //space complexity will be O(38) or still O(n).
        //Time complexity will be O(n)
        int arr[38] = {0};
        
        arr[0] = 0, arr[1] = 1, arr[2]=1;
        
        for(int i=3; i<=n; i++){
            arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
        }
        
        return arr[n];
    }
};