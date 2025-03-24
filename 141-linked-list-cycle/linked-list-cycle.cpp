/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast = head->next;
    
        while(fast && fast->next && fast->next->next){
            if(fast == slow){
                cout<<fast->val;
                return true;
            }
            fast = fast->next->next;
            slow=slow->next;
        }
        cout<<fast->val;
        return false;
    }
};