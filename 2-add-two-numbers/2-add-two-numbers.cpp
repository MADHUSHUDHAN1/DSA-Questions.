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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* newList = new ListNode(); 
        ListNode* temp = newList;         
        
        int iCarry=0;
        
       
        while((l1!=NULL) || (l2!=NULL) || (iCarry!=0)) 
        {
            int iSum=0,iDigit=0;
            
            if(l1!=NULL)   
            {
                iSum+=l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL)    
            {
                iSum+=l2->val;
                l2 = l2->next;
            }
            if(iCarry!=0)    
            {
                iSum+=iCarry;
            } 
                   
            
            iCarry = iSum/10; 

            
            iDigit = iSum%10;
            
             
            ListNode* newn = new ListNode(iDigit);
            temp->next = newn;
            temp = temp->next;
        }
        return newList->next;
    }
};