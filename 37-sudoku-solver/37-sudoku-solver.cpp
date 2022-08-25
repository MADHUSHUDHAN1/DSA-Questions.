class Solution {
public:
    bool isValid(vector<vector<char>> &board, int i,int j, char val)
    {
        int row = i - i%3, column = j - j%3;
    for(int x=0; x<9; x++) if(board[x][j] == val) return false;
    for(int y=0; y<9; y++) if(board[i][y] == val) return false;
    for(int x=0; x<3; x++)
    for(int y=0; y<3; y++)
        if(board[row+x][column+y] == val) return false;
    return true;
    }
    bool solve(vector<vector<char>> &board)
    {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[i].size(); j++)
            {
                if(board[i][j] == '.')
                {
                    for(char c = '1'; c<='9'; c++)
                    {
                        if(isValid(board,i,j,c)){
                            board[i][j] = c;
                        
                        if(solve(board) == true) return true;
                        else board[i][j] = '.';
                    }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};