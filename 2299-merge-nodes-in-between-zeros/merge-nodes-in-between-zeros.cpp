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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newLL = NULL;
        ListNode* finalLL = NULL;
        while(head->next){
            int cnt = 0;
            if(head->val == 0){
                while(head->next && head->next->val != 0){
                    cnt += head->next->val;
                    head = head->next;
                }
            }
            head= head->next;
            if(newLL == NULL){
                newLL = new ListNode(cnt);
                finalLL = newLL;
            }else{
                newLL->next = new ListNode(cnt);
                newLL = newLL->next;
            }
        }
        return finalLL;
    }
};