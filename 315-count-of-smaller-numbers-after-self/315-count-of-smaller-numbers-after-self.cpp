
class Solution {
public:
    void merge(vector<int> &count, vector<pair<int, int> > &arr, int left, int mid, int right) {
        
        vector<pair<int, int> > temp(right-left+1);
        int i = left;
        int j = mid+1;
        int k = 0;
        int right_side_smaller = 0;
        
        while (i <= mid && j <= right) {
            
            if (arr[i].first <= arr[j].first) { 
                count[arr[i].second] += right_side_smaller;
                temp[k++] = arr[i++];
            }
            
            else {
                right_side_smaller++; // increase count of smaller element present on the right side
                temp[k++] = arr[j++];
            }
        }
        
        while (i <= mid){
            count[arr[i].second] += right_side_smaller;
            temp[k++] = arr[i++];
        }
        
        while (j <= right){
            temp[k++] = arr[j++];
        }
        
        for (int i=left;i<=right;i++)
            arr[i] = temp[i-left];
    }        

    void mergeSort(vector<int> &count, vector<pair<int, int> > &arr, int left, int right) {
        if (left >= right) 
            return;

        int mid = left + (right-left)/2;
        mergeSort(count, arr, left, mid);
        mergeSort(count, arr, mid+1, right);
        merge(count, arr, left, mid, right);
    }

    vector<int> countSmaller(vector<int>& nums) {
        
        int n = nums.size();
        vector<pair<int, int> > arr(n);
        for (int i = 0; i < n; i++)   
            arr[i] = make_pair(nums[i], i);

        vector<int> count(n, 0);
        mergeSort(count, arr, 0, n-1);
        return count;
    }
};
