/**
 https://leetcode.com/problems/add-two-numbers/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int x,car;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *ret = new ListNode();
        ListNode *temp = ret;
        while(l1 or l2 or carry){
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            ListNode *sum = new ListNode((val1+val2+carry)%10);
            carry = (val1+val2+carry)/10;
            temp->next = sum;
            temp = temp->next;
            
            if(l1){
                l1 = l1->next;
            }
            if(l2){
                l2 = l2->next;
            }
        }
        return ret->next;
    }
};