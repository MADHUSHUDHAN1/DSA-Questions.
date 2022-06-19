class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> mp;
        int r = mat.size();
        int c = mat[0].size();
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        
        for(int i = -(c-1); i<r; i++)
        {
            sort(mp[i].begin(),mp[i].end());
        }
        
        for(int i=r-1; i>=0; i--)
        {
            for(int j=c-1; j>=0; j--)
            {
                mat[i][j] = mp[i-j].back();
                mp[i-j].pop_back();
            }
        }
        return mat;
    }
};