/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int binary_search(MountainArray &mountainArr, int s, int e, int target){
        
        if(mountainArr.get(s) < mountainArr.get(e)){
             while(s<=e){
                     int mid = s+(e-s)/2;
                    if(mountainArr.get(mid)==target)
                        return mid;
                    else if(mountainArr.get(mid) > target)
                        e = mid-1;
                    else
                        s = mid+1;
            }
            return -1;
        }
        else{
             while(s<=e){
                 int mid = s+(e-s)/2;
                if(mountainArr.get(mid)==target)
                    return mid;
                else if(mountainArr.get(mid) > target)
                    s = mid+1;
                else
                    e = mid-1;
        }
            return -1;
        }
           
    }
//     int binary_search_right(MountainArray &mountainArr, int s, int e, int target){
        
//     }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        
        int s=0;
        int e=mountainArr.length()-1;
    
        //find peak element 
        while(s<e){
            int mid = s+(e-s)/2;
            if(mountainArr.get(mid) > mountainArr.get(mid+1)){
              e = mid;
            }
            else{
                s = mid+1;
            }
        }
        
        //search range 0 to peak element(e) index 
        int ind = binary_search(mountainArr, 0, e, target);  //array is asceding search
        
        if(ind!=-1){
               return ind;
        }
        else{
            return binary_search(mountainArr, e+1, mountainArr.length()-1, target);  // descending search
        }
        
    }
    
};