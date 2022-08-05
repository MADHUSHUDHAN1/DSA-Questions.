class Solution {
public:
    
    int check(int i, int j, vector<vector<int>> &dp)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 ||  j<0)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int left = check(i,j-1,dp);
        int up = check(i-1,j,dp);
        return dp[i][j] =left+up;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int> (n,-1));
       // check(m-1,n-1,dp);
        return check(m-1,n-1,dp);
    }
};