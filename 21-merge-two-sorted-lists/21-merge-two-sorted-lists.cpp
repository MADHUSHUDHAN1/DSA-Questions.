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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        ListNode dummy(INT_MIN);
        ListNode* list = &dummy;
        while(list1 != NULL && list2 != NULL)
        {
            if(list1->val <= list2->val)
            {
                list->next = list1;
                list = list->next;
                list1 = list1->next;
            }
            else{
                list->next = list2;
                list = list->next;
                list2 = list2->next;
            }
        }
        while(list1 != NULL)
        {
            list->next = list1;
            list = list->next;
            list1 = list1->next;
        }
        while(list2 != NULL)
        {
            list->next =list2;
            list = list->next;
            list2 = list2->next;
        }
        return dummy.next;
    }
};