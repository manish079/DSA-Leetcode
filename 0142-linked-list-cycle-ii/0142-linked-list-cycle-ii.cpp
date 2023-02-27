/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       
        //Using floyed algorithm
        //we take 2 pointer one run one step anothor is 2 step
        //first we check wheater cycle exit of not. if exit just break loop
        //again do firstPointer = head and loop unitll it not equal to 2ndPointer.
        //if equal both pointer return one pointer
        
        
        ListNode *ptr1 = head;
        ListNode *ptr2 =head;
        
        bool isCycle = false;
        
        while(ptr1 != NULL &&  ptr2 != NULL){
            ptr1 = ptr1 -> next;
             if (ptr2->next == NULL) 
                 return NULL;
            ptr2 = ptr2 -> next -> next;
            
            if(ptr1 == ptr2){
                isCycle = true;
                break;
            }
        }
        
        //No cycle case
        if(!isCycle){
            return NULL;
        }
        
        ptr1 = head;
        
        while(ptr1 != ptr2){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
           
        }
        return ptr1;
    }
};