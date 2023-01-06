class Solution {
public:
    int mySqrt(int x) {
        
       long long int s = 1, e = x;
        
        while(s<=e){
           long long int mid = (s+e)>>1;
            
            // perfect squre case
            if(mid*mid == x)
                return mid;
            
            //reduce search space in right side
            if((mid*mid) > x)
                e = mid-1;
            else
                s = mid+1;
        }
        return s-1;
    }
};