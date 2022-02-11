// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverse(struct Node* head)
    {
        struct Node* curr = head;
        struct Node* prev = NULL;
        struct Node* next = NULL;
        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void insertDigit(struct Node* &ansHead, struct Node* &ansTail,int digit)
    {
         Node* temp = new Node(digit);
        if(ansHead == NULL)
        {
            ansHead = temp;
            ansTail = temp;
            return;
            
        }
        else{
            ansTail->next = temp;
            ansTail = temp;
        }
    }
    
    struct Node* addList(struct Node* first, struct Node* second)
    {
         Node* ansHead = NULL;
         Node* ansTail = NULL;
        int carry =0;
        while(first != NULL && second != NULL)
        {
            int sum = carry + first->data + second->data;
            int digit = sum%10;
            insertDigit(ansHead,ansTail,digit);
            carry = sum/10;
            first = first->next;
            second = second->next;
        }
        while(first != NULL)
        {
            int sum = carry + first->data;
            int digit = sum%10;
            insertDigit(ansHead,ansTail,digit);
            carry = sum/10;
            first = first->next;
        }
        while(second != NULL)
        {
            int sum = carry + second->data;
            int digit = sum%10;
            insertDigit(ansHead,ansTail,digit);
            carry = sum/10;
            second = second->next;
        }
        while(carry != 0)
        {
            int sum = carry;
            int digit = sum%10;
            insertDigit(ansHead,ansTail,digit);
            carry /=10;
        }
        return ansHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = reverse(first);
        second = reverse(second);
        
        struct Node* ans = addList(first,second);
        
        ans = reverse(ans);
        return ans;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends