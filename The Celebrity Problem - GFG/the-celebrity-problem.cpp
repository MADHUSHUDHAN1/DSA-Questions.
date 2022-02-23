// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    int knows(int a, int b,vector<vector<int> >& M)
    {
        return M[a][b];
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for(int i=0; i<n; i++)
        {
            s.push(i);
        }
        while(s.size()>1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(knows(a,b,M))
            {
                s.push(b);
            }
            else {
                s.push(a);
            }
        }
        int key = s.top();
        int countZero = 0;
        int countOne =0;
        bool checkrow = false;
        bool checkcol = false;
        
        for(int i=0; i<n; i++)
        {
            if(M[key][i] == 0)
            countZero++;
            if(M[i][key] == 1)
            countOne++;
        }
        if(countZero == n)
        {
            checkrow = true;
        }
        if(countOne == n-1)
        {
            checkcol = true;
        }
        if(checkrow && checkcol)
        return key;
        
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
  // } Driver Code Ends