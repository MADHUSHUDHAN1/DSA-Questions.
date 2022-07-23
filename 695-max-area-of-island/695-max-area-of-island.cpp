class Solution {
public:
    int AreaOfIsland(vector<vector<int>>& grid, int i, int j,int n, int m){
        
        if( i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1){
            grid[i][j] = 0;
            return 1 + AreaOfIsland(grid, i+1, j,n,m) + AreaOfIsland(grid, i-1, j,n,m) + AreaOfIsland(grid, i, j-1,n,m) + AreaOfIsland(grid, i, j+1,n,m);
        }
        return 0;
    }
    
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        //long long int maxArea = 0;
        
         int n = grid.size();
         int m = grid[0].size();
       int max_area = 0;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(grid[i][j] == 1)max_area = max(max_area, AreaOfIsland(grid, i, j,n,m));
        return max_area;
    }
};