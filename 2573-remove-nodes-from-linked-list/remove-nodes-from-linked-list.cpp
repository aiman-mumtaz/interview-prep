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
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        while(head){
            arr.push_back(head->val);
            head = head->next;
        }
        int maxEl = 0;
        stack<int> a;
        for(int i = arr.size()-1;i>=0;i--){
            if(arr[i] >= maxEl){
                maxEl  = arr[i];
                a.push(arr[i]);
            }
        }
        head = new ListNode(a.top());
        ListNode* ans = head;
        a.pop();
        while(!a.empty()){
            head->next = new ListNode(a.top());
            head = head->next;
            a.pop();
        }
        return ans;
    }
};