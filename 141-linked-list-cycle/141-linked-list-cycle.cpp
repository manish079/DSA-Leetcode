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
    bool hasCycle(ListNode *head) {
        
        //Approach-1 fast and slow ptr
        
//         if(head==NULL){
//             return false;
//         }
        
//         ListNode *fast=head;
//         ListNode *slow=head;
        
//         while(fast!=NULL && fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
            
//             if(fast==slow)
//                 return true;
//         }
//         return false;
        
        
        //Approach-2 HashMap
        
        unordered_map<ListNode*, bool> visited;
        ListNode *temp=head;
        
        while(temp!=NULL){
            
            //cycle is present
            if(visited[temp] == true)
                return true;
            //mark node visited if cycle not detect
            visited[temp] = true;
            temp=temp->next;
        }
        return false;
        
    }
};