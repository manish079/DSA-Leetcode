class Solution {
public:
    int countOdds(int low, int high) {
        
        int temp = (high-low)/2;
        
        //If anyone one not is odd then add one 
        if(low%2!=0 || high%2!=0){
            temp++;
        }
        return temp;
    }
};