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
    int getDecimalValue(ListNode* head) {
        string ans = "";
        while(head){
            ans += to_string(head->val);
            head= head->next;
        }
        int j=ans.length()-1;
        int cnt =0;
        int value=0;
        while(j>=0){
            value += (pow(2,cnt)*(ans[j]-'0'));
            j--;
            cnt++;
        }
        return value;
    }
};