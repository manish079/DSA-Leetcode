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
    ListNode* oddEvenList(ListNode* head) {
        
         if(head==NULL || head->next==NULL || head->next->next==NULL){
            return head;
        }
       
        ListNode *dummy1 = head;
        ListNode *dummy2 = head->next;
        ListNode *temp = head->next;
        
        while(dummy1->next!=NULL && dummy2->next!=NULL){
            dummy1->next = dummy2->next;
            dummy2->next = dummy1->next->next;
            
            dummy1=dummy1->next;
            dummy2=dummy2->next;
        }
        dummy1->next = temp;
        
       return head;
        
    }
};