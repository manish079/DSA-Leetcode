class Solution {
    public int missingNumber(int[] arr) {
        
        int natural = arr.length*(arr.length+1)/2;
        int sum=0;
        for(int i=0; i<arr.length; i++)
            sum += arr[i];
        int res = natural-sum;
        return res;
    }
}