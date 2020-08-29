//https://leetcode.com/problems/merge-k-sorted-lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){
            return nullptr;
        }
        ListNode *start = new ListNode();
        ListNode *temp = start;
        int k = lists.size();
        bool finish = false;
        while(!finish){
            finish = true;
            int mini = 10000;
            int min_index = -1;
            for(int i=0;i<k;i++){
               if(lists[i] && mini > lists[i]->val){
                   mini = lists[i]->val;
                   min_index = i;
                   finish = false;
               }
            }
            if(finish){
                break;
            }
            ListNode *newNode = new ListNode(mini);
            lists[min_index] = lists[min_index]->next;
            temp->next = newNode;
            temp = temp->next;
        }
        return start->next;
    }
};


//or can just iterate list and store them in a vector and use some sorting algorithm and push all nodes in a single linked list