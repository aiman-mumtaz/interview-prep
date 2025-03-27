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
        ListNode* tmp = head;
        ListNode* newLL = NULL;
        ListNode* finalLL = NULL;
        while(tmp->next){
            int cnt = 0;
            if(tmp->val == 0){
                while(tmp->next && tmp->next->val != 0){
                    // cout<<tmp->next->val<<"  ";
                    cnt += tmp->next->val;
                    tmp = tmp->next;
                }
            }
            tmp= tmp->next;
            if(newLL == NULL){
                newLL = new ListNode(cnt);
                finalLL = newLL;
            }else{            
                ListNode* newNode = new ListNode(cnt);
                newLL->next = newNode;
                newLL = newLL->next;
            }
        }
        return finalLL;
    }
};