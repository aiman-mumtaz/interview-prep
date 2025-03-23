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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            head=head->next;
        }
        ListNode* tmp = head;
        ListNode* prev = NULL;
        while(tmp != NULL){
            if(tmp->val == val){
                prev->next = tmp->next;
            }else
                prev=tmp;
            tmp=tmp->next;
        }
        return head;
    }
};