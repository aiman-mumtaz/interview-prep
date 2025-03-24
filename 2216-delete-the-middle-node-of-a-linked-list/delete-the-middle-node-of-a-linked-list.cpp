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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode* fast = head;
        ListNode* prev = head;
        ListNode* mid = head;
        while(fast->next != NULL && fast->next->next != NULL){
            mid = mid->next;
            fast = fast->next->next;
        }
        if(fast->next != NULL){
            mid = mid->next;
        }
        while(prev->next != mid){
            prev= prev->next;
        }
        prev->next = mid->next;
        return head;
    }
};