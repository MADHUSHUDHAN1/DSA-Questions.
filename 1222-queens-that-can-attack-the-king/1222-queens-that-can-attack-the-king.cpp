class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
       vector<vector<bool>> dp(8,vector<bool> (8,false));
        for(auto &q: queens)
        {
            dp[q[0]][q[1]] = true;
        }
        vector<vector<int>> ans;
        
        for(int i=-1; i<=1; i++)
        {
            for(int j=-1; j<=1; j++)
            {
                if(i==0 && j == 0)continue;
                
                int x = king[0]+i, y= king[1]+j;
                while(min(x,y)>=0 && max(x,y)<8)
                {
                    if(dp[x][y])
                    {
                        vector<int> res;
                        res.push_back(x);
                        res.push_back(y);
                        ans.push_back(res);
                        break;
                    }
                    x +=i;
                    y +=j;
                }
            }
        }
        return ans;
    }
};