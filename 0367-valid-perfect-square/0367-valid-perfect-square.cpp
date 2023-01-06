class Solution {
public:
    bool isPerfectSquare(int x) {
        long long int s = 1, e = x;
        
        while(s<=e){
            long long int mid = (s+e)>>1;
            
            // perfect squre case
            if(mid*mid == x)
                return true;
            
            if((mid*mid) > x)
                e = mid-1;
            else
                s = mid+1;
        }
        return false;
    }
};