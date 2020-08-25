//https://leetcode.com/problems/merge-two-sorted-lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *start = new ListNode;
        ListNode *temp = start;
        if(!l1 && !l2){
            return NULL;
        }
        while(l1 && l2){
            if(l1->val <= l2->val){
                ListNode *newNode = new ListNode(l1->val);
                temp->next = newNode;
                temp = temp->next;
                l1 = l1->next;
            }
            else{
                ListNode *newNode = new ListNode(l2->val);
                temp->next = newNode;
                temp = temp->next;
                l2 = l2-> next;
            }
        }
        while(l1){
            ListNode *newNode = new ListNode(l1->val);
            temp->next = newNode;
            temp = temp->next;
            l1 = l1-> next;
        }
        while(l2){
            ListNode *newNode = new ListNode(l2->val);
            temp->next = newNode;
            temp = temp->next;
            l2 = l2-> next;
        }
        return start->next;
    }
};
