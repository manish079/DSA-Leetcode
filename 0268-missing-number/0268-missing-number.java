class Solution {
    public int missingNumber(int[] arr) { 
        
     int H[] = new int[arr.length+1];
        Arrays.fill(H,0);
        
        for(int i=0; i<arr.length; i++){
            H[arr[i]]++;
        }
    
        for(int i=1; i<H.length; i++){
            if(H[i]==0){
                return i;
            }
        }
        return 0;
  }
}