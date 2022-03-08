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
        
        ListNode *res = new ListNode(0);
        ListNode *head1 = res;
        head = head->next;
        int sum = 0;
        while(head != NULL)
        {
            if(head->val == 0)
            {
                head1->next = new ListNode(sum);
                head1 = head1->next;
                sum = 0;
            }
            else{
                sum += head->val;
                
            }
            head = head->next;
        }
        return res->next;
    }
};