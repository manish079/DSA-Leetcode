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

        vector<int> temp;
       
         while(head!=NULL){
            temp.push_back(head->val);
            head=head->next;
        }
    
        vector<int> v;
        v=temp;
        
        reverse(temp.begin(), temp.end());
        
        for(int j=0; j<v.size(); j++){
            if(temp[j]!=v[j]){
                return false;
            }
        }
        return true;
        
    }
};