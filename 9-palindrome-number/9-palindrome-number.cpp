class Solution {
public:
    bool isPalindrome(int x) {
        
        int n=x;
        long sum=0;
        if(x<0 || x!=0 && x%10==0)
            return false;
        
        while(n>0){
            sum = sum*10+n%10;
            n/=10;
        }
        if(sum==x){
            return true;
        }
        else
            return false;
    }
};