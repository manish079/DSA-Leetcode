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
    
    ListNode* middleElement(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head->next;
        
        
        while(fast!=NULL && fast->next!=NULL){
              slow=slow->next;
            fast=fast->next->next;
           
        }
        return slow;
    }
    
    ListNode *reverse(ListNode *head){
        
     
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *currNext=NULL;
            
        while(curr!=NULL){
            currNext = curr->next;
            curr->next=prev;
            prev=curr;
            curr=currNext;
        }
        head = prev;
        return head;
    }
    
    bool isPalindrome(ListNode* head) {

//         vector<int> temp;
       
//          while(head!=NULL){
//             temp.push_back(head->val);
//             head=head->next;
//         }
    
//         for(int i=0; i<temp.size()/2; i++){
//             if(temp[i]!=temp[temp.size()-1-i]){
//                 return false;
//             }
//         }
//         return true;
        
        
        //Optimize
        
        // 1. find middle element
        // 2. reverse list from middle+1 to upto null
        // 3. check palindrome
        
        if(head==NULL && head->next==NULL){  //When only ne node in list
            return true;
        }
        
        
        //middle element finding
        ListNode *mid = middleElement(head);
        
        ListNode *temp=mid->next;
    
        //reverse middle+1 to upto null 
        mid->next = reverse(temp);
        
        ListNode *head1=head;
        ListNode *head2 = mid->next;
        
        while(head2!=NULL && head1!=NULL){
            if(head1->val!=head2->val)
                return false;
            head1=head1->next;
            head2=head2->next;
        }
        return true;
        
    }
};

