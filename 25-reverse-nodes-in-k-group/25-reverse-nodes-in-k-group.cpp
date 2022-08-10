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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count =0;
        ListNode* curr = head;
        while(curr != NULL)
        {
            curr = curr->next;
            count++;
        }
        if(count < k)
            return head;
        
        curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        count =0;
        while(count<k && curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != NULL)
        {
            head->next = reverseKGroup(next,k);
        }
        
            return prev;
    }
};