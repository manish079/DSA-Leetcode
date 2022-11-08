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
struct comparator{
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<ListNode*, vector<ListNode*>, comparator> pq;
        
        //inserting element in min heap 
        //total k list are so inserting time complexity will be O(logK), k is no of nodes
        
        for(int i=0; i<lists.size(); i++){
            if(lists[i]!=NULL)
                pq.push(lists[i]);
        }
        
        //deletion from top
        // logK , where k number of nodes
            ListNode *dummy = new ListNode(-1);
            ListNode *tail = dummy;
        
            while(pq.size()){
                
                //O(1) for getting min value bcoz it place on root element
                ListNode *temp = pq.top();
                tail->next = temp;
                tail = temp;
                pq.pop();
                
                if(temp->next!=NULL){
                    pq.push(temp->next);
                }  
            }
        return dummy->next;
        
    }
};