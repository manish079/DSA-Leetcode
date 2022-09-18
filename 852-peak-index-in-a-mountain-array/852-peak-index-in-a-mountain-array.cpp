class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int max = arr[0];
        int ind;
        for(int i=1; i<arr.size(); i++){
            if(max < arr[i]){
                max = arr[i];
                ind=i;
            }
        }
        return ind;
    }
};