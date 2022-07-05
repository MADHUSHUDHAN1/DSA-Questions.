class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0; i<n; i++)
        {
            if(grid[i][0] == 0)
            {
                for(int j=0; j<m; j++)
                {
                    if(grid[i][j] == 0)
                    {
                        grid[i][j] = 1;
                    }
                    else
                    {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        vector<int> countZero(m,0),countOne(m,0);
        for(int j=0; j<m; j++)
        {
            int count = 0;
            int count1 = 0;
            for(int i=0; i<n; i++)
            {
                if(grid[i][j] == 0)
                {
                    count++;
                }
                else
                {
                    count1++;
                }
            }
            countZero[j] = count;
            countOne[j] = count1;
        }
        for(int j=0; j<m; j++)
        {
            if(countZero[j] > countOne[j])
            {
               for(int i=0; i<n; i++)
                {
                 if(grid[i][j] == 0)
                 {
                     grid[i][j] = 1;
                 }
                   else
                   {
                       grid[i][j] = 0;
                   }
                }
            }
        }
        
        int res = 0;
        for(int i = n-1; i>=0; i--)
        {int sum =0;
         int p = 0;
            for(int j=m-1; j>=0; j--)
            {
                if(grid[i][j] == 1)
                {
                    sum += (int)pow(2,p);
                }
                p++;
            }
         res += sum;
        }
        return res;
    }
};