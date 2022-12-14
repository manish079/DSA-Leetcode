class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int s = 0;
        int e = letters.size()-1;
        
        //base case 
        if(target >= letters[e])
            return letters[0];
        
        while(s<=e){
            int mid = s + (e-s)/2;
           if(letters[mid] > target)
                e = mid-1;
            else
                s = mid+1;
        }
        
        // return letters[s%letters.size()];  // If we don't write base case here automatically handle
        return letters[s];
        
    }
};