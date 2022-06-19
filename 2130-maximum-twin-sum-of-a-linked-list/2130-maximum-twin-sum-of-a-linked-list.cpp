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
    int pairSum(ListNode* head) {
        vector<int> ans;
        
        while(head != NULL)
        {
            ans.push_back(head->val);
            head = head->next;
        }
        int maxSum = INT_MIN;
        int n = ans.size();
        for(int i=0; i<n/2; i++)
        {
            int sum = ans[i] + ans[n-1-i];
            maxSum = max(maxSum,sum);
        }
        return maxSum;
        
    }
};