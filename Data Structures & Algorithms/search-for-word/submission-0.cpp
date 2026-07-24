class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int r,int c,vector<vector<int>>&vis,int i){
        if(i==word.length())return true;
        if( r < 0 || c < 0 || r >= board.size() || c >=board[0].size()  ||
            board[r][c] != word[i] ||vis[r][c]==1 )return false;
        vis[r][c]=1;
        bool res=dfs(board,word,r+1,c,vis,i+1)||dfs(board,word,r,c+1,vis,i+1)||
            dfs(board,word,r-1,c,vis,i+1)||dfs(board,word,r,c-1,vis,i+1);
        vis[r][c]=0;
    return res;
    
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,word,i,j,vis,0))return true;
            }
        }
        return false;
    }
};
