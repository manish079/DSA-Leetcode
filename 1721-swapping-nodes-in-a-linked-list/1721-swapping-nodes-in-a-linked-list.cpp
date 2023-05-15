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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *p1 = NULL;
        ListNode *p2 = NULL;
        
        ListNode *ptr = head;
        int cnt = 0;
        
        int i = 1;
        
        while(ptr!=NULL){
           
            if(p2!=NULL){
                p2 = p2->next;    
            }   
            
            if(i==k){
                p1 = ptr;
                p2 = head;
            }
            ptr=ptr->next;
            i++;
        }
        
        swap(p1->val, p2->val);
        
        return head;
       
        
    }
};