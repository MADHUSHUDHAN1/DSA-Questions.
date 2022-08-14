class Solution {
public:
    void f(vector<vector<int>>& image, int par, int n, int m, int sr, int sc, int color,vector<vector<int>> &visited)
    {
        
        //Up
        if(sr-1>=0 && sr-1 <n && par == image[sr-1][sc] && !visited[sr-1][sc])
        {
            visited[sr][sc] = 1;
            f(image,image[sr-1][sc],n,m,sr-1,sc,color,visited);
        }
        //Down
        if(sr+1>=0 && sr+1 <n && par == image[sr+1][sc] && !visited[sr+1][sc])
        {
            visited[sr][sc] = 1;
            f(image,image[sr+1][sc],n,m,sr+1,sc,color,visited);
        }
        //Left
        if(sc-1>=0 && sc-1 <m && par == image[sr][sc-1] && !visited[sr][sc-1])
        {
            visited[sr][sc] = 1;
            f(image,image[sr][sc-1],n,m,sr,sc-1,color,visited);
        }
        //Right
        if(sc+1>=0 && sc+1 <m && par == image[sr][sc+1] && !visited[sr][sc+1])
        {
            visited[sr][sc] = 1;
            f(image,image[sr][sc+1],n,m,sr,sc+1,color,visited);
        }
        visited[sr][sc] = 1;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> visited(n,vector<int> (m,0));
        f(image,image[sr][sc],n,m,sr,sc,color,visited);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(visited[i][j] == 1)
                {
                    image[i][j] = color;
                }
            }
        }
        return image;
    }
};