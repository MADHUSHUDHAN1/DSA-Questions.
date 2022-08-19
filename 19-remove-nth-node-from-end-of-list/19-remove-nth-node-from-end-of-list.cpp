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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        
       
        if(c == n) return head->next;
        temp = head;
        int i=1;
        //if(c == 0) return NULL;
        while(i<c-n)
        {
            i++;
            temp = temp->next;
        }
        temp->next =temp->next->next;
        //delete(temp->next);
        return head;
    }
};