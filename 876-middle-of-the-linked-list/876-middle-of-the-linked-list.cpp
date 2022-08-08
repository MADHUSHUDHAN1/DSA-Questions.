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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* curr = head;
        while(curr != NULL)
        {
            count++;
            curr = curr->next;
        }
        int mid=0;
        if(count % 2 == 0)
        {
             mid = count/2 +1;
        }
        else{
             mid = (count+1)/2;
        }
        for(int i=0; i<mid-1; i++)
        {
            head = head->next;
        }
        return head;
    }
};