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
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        vector<vector<int>> spiral(n,vector<int>(m,-1));
        
        int i=0,j=0;
        while(head != NULL)
        {
            if(j<m){
                while(j<m && head != NULL && spiral[i][j] == -1)
                {
                    spiral[i][j] = head->val;
                    head = head->next;
                    j++;
                }
                if(head == NULL)
                    break;
                i++;
                j--;
            }
            if(i<n)
            {
                while(i<n && head!=NULL && spiral[i][j] == -1)
                {
                    spiral[i][j] = head->val;
                    head = head->next;
                    i++;
                }
                if(head == NULL) break;
                i--;
                j--;
            }
            if(j>=0)
            {
                while(j>=0 && head != NULL && spiral[i][j] == -1)
                {
                    spiral[i][j] = head->val;
                    head = head->next;
                    j--;
                }
                if(head == NULL)
                    break;
                i--;
                j++;
            }
            if(i>=0)
            {
                while(i>=0 && head != NULL && spiral[i][j] == -1)
                {
                    spiral[i][j] = head->val;
                    head = head->next;
                    i--;
                }
                if(head == NULL) break;
                
                i++;
                j++;
            }
            
         n--; 
            m--;
        }
        return spiral;
    }
};