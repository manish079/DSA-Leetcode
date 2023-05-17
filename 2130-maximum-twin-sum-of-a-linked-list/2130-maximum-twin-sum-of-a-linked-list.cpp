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
    
   
    
    int pairSum(ListNode* head) {
        
        // Approach-3 Using - reverse list after n/2
        
        int ans = 0;
        
        // 1. find mid
         
        ListNode *slow = head;
        ListNode *fast = head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            
        }
        
        ListNode *mid = slow;
        
        //2. reverse 2nd half of list
       ListNode *prev = NULL;
        ListNode *nextPtr = NULL;
        
        while(mid!=NULL){
            
            nextPtr  = mid->next;
            mid->next = prev;
            
            prev = mid;
            mid = nextPtr;
        }
        
    
        //3.Compute sum
        
        ListNode *curr = head;
        while(prev!=NULL){
            
            ans = max(ans, curr->val + prev->val);
            curr = curr->next;
            prev = prev->next;
        }
        
        return ans;
               
        
    }
};