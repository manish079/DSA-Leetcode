class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        /*
        int temp[m+n];
        int i=0, j=0, k=0;
        
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                temp[k]=nums1[i];
                k++;
                i++;
            }
            else{
                temp[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i<m){
            temp[k]=nums1[i];
            k++;
            i++;
        }
        while(j<n){
            temp[k]=nums2[j];
            j++;
            k++;
        }
        
        for(int x=0; x<(m+n); x++){
            nums1[x]=temp[x];
        }
        */
        
        //Without space using O(1) space complexity 
        //Time complexity O(m+n)  total number of element
        int i = m - 1, j = n - 1, k = (m + n - 1);

        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
            else
            {
                nums1[k] = nums1[i];
                k--;
                i--;
            }
        }
        while (i >= 0)
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        
    }
};