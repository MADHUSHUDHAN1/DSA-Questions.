// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    void checkIsland(vector<vector<char>> &gird,int i,int j, int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || gird[i][j] != '1')
        {
            return;
        }
        gird[i][j] = '2';
        checkIsland(gird,i+1,j,n,m);
        checkIsland(gird,i-1,j,n,m);
        checkIsland(gird,i,j+1,n,m);
        checkIsland(gird,i,j-1,n,m);
        checkIsland(gird,i+1,j+1,n,m);
        checkIsland(gird,i-1,j-1,n,m);
        checkIsland(gird,i+1,j-1,n,m);
        checkIsland(gird,i-1,j+1,n,m);
    }
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] == '1')
                {
                    checkIsland(grid,i,j,n,m);
                    count +=1;
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends