class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        //Brute force approace
        // int max = arr[0];
        // int ind;
        // for(int i=1; i<arr.size(); i++){
        //     if(max < arr[i]){
        //         max = arr[i];
        //         ind=i;
        //     }
        // }
        // return ind;
        
        
        
        //optimize using binary search
        
        int s = 0;
        int e = arr.size()-1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
                return mid;
            else if(arr[mid+1] > arr[mid])
                s=mid+1;
            else
                e = mid-1;
                
        }
        return -1;
    }
};