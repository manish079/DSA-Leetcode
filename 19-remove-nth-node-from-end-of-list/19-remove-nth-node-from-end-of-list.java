/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
     
        if(head==null)
            return null;
        
        if(head.next==null)
            return null;
        
        ListNode temp = head;
        int count=0;
        
        while(temp!=null){
            temp=temp.next;
            count++;
        }
        
        int pos = count-n;
        
        ListNode ptr = head;
        
        if(pos==0){
            head = head.next;
        }
        
        for(int i=1; i<pos && ptr.next!=null; i++){
            ptr = ptr.next;
        }
        
        if(ptr.next.next!=null){
            ptr.next = ptr.next.next;
        }
        else
            ptr.next=null;
        
        return head;
    }
}