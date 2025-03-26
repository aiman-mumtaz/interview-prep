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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        vector<int> a;
        ListNode* tmp=head;
        while(tmp){
            a.push_back(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        int i = a.size()-1;
        while(tmp){
            tmp->val = a[i];
            i--;
            tmp = tmp->next;
        }
        return head;
    }
};