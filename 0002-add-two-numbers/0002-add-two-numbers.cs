/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public ListNode AddTwoNumbers(ListNode l1, ListNode l2) {
        return AddRecursive(l1,l2);
    }
    ListNode AddRecursive(ListNode l1, ListNode l2){
        if(l1.next == null && l2.next == null){
            if((l1.val+l2.val)/10==0)
                return new ListNode(l1.val+l2.val);
            return new ListNode((l1.val+l2.val)%10,new ListNode((l1.val+l2.val)/10,null));
        }
        l1.next = l1.next == null ? new ListNode() : l1.next;
        l2.next = l2.next == null ? new ListNode() : l2.next;
        l1.next.val += (l1.val+l2.val)/10;
        return new ListNode((l1.val+l2.val)%10,AddRecursive(l1.next,l2.next));
    }
}