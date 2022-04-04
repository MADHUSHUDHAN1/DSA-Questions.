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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* curr = head;
        int count= 0 ;
        ListNode* first =NULL;
        while(curr != NULL)
        {
            count++;
            if(count == k)
            {
                first = curr;
            }
            curr = curr->next;
        }
        int count1=0;
        curr = head;
        while(curr != NULL)
        {
            count1++;
            if(count-k+1 == count1)
            {
                break;
            }
            curr = curr->next;
        }
        int temp = first->val;
        first->val = curr->val;
        curr->val = temp;
        return head;
    }
};