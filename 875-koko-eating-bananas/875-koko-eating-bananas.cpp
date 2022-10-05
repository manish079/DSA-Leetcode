class Solution {
public:
    
    bool canItInTime(vector<int>&piles, int mid, int h){
        
        long hour = 0;
        
        for(int i=0; i<piles.size(); i++){
            hour+=(piles[i]/mid);
            if(piles[i]%mid!=0){
                hour++;
            }
        }
        
        if(hour <= h)
            return true;
        else
            return false;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int left = 1;
        int ans=0;
        int right = *max_element(piles.begin(), piles.end());
        
        
        while(left<=right){
            int mid = (left+right)>>1;
            
            if(canItInTime(piles, mid, h)){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return ans;
        
    }
};