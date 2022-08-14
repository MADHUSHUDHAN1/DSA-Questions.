class Solution {
public:
    void f(vector<vector<int>>& image, int i, int j,int par, int color)
    {
        
        if(i<0 || j<0 || i>=image.size() || j>= image[0].size() || par != image[i][j])
            return;
        
      image[i] [j] = color;
        //Up
        f(image,i-1,j,par,color);
        //Down
        f(image,i+1,j,par,color);
        //Left
        f(image,i,j-1,par,color);
        //Down
        f(image,i,j+1,par,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] != color)
        f(image,sr,sc,image[sr][sc],color);
        
        return image;
    }
};