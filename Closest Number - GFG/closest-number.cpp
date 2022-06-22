// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int closestNumber(int M , int N) {
        // code here
     int q = M/N;
     int FirstN = N*q, SecondN = N*(q+1);
     if(M*N < 0)
     {
         SecondN = N*(q -1);
     }
     if(abs(M-FirstN) < abs(M - SecondN))
     {
         return FirstN;
     }
     return SecondN;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}  // } Driver Code Ends