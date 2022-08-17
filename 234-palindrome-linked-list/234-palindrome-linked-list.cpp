/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    
        int i=0,count=0;
        ListNode *temp1,*temp2;
        temp1=head;
        while(temp1!=NULL){
            temp1=temp1->next;
            count++;
        }
        int arr[count];
        temp2=head;
         while(temp2!=NULL){
            arr[i]=temp2->val;
            temp2=temp2->next;
            i++;
        }
        
        int arr2[count];
        for(int k=0; k<count; k++){
            arr2[k]=arr[count-1-k];
        }
        
        for(int j=0; j<count; j++){
            if(arr[j]!=arr2[j]){
                return false;
            }
        }
        return true;
        
    }
};