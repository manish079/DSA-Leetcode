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
       
    ListNode* reverseKGroup(ListNode* head, int k) {
                
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *next=NULL;
        
        int cnt=0;
        
        // cursor used for to handle when remaining nodes are not equal 
        //to k then no recursive fun call and return list
        ListNode *cursor = head;
        
        for(int i=0; i<k; i++){
            if(cursor==NULL)
                return head;
            cursor=cursor->next;
        }
        
       
        if(head==NULL || head->next==NULL || k==1){
            return head;
        }
        
        //10->20->30->40->50->60->NULL   Initially list and k=2
        
        //First k element's are reversed
        while(curr!=NULL && cnt<k){
            next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            ++cnt;
        }
        
        //prev ptr point to 20(1st node) and head point to 10 and next or curr point 30 
        //10 <- 20 30->40->50->60->NULL    //recursion handles n-1 th cases(node 30 to NULL)      
        
        //Remaining element are reverse handled by recurion
         if(next!=NULL)  // Till list is not reaches to NULL (20 10 40 30 60 50 NULL) then next and curr point NULL that is list is reversed completely.                                       
            head->next=reverseKGroup(next, k);
        
        return prev;
    }
};