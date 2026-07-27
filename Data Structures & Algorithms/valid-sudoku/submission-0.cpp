class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    char c = board[i][j];
                    board[i][j] = '.'; 
                    if(!is_valid(i, j, board, c))
                        return false;
                    board[i][j] = c;  
                }
            }
        }
    return true;
    }
    bool is_valid(int row,int col,vector<vector<char>>& board,char c){
        for(int i=0;i<board.size();i++){
            if(board[i][col]==c)return false;
            if(board[row][i]==c)return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)return false;
        }
     return true;
    }
};