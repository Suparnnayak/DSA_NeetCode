class Solution {
public:
    bool dfs(int i,int r,int c,vector<vector<char>>& board, string word,vector<vector<int>>&vis){
        if(i==word.size())return true;
        if(r<0 || c<0 || r>=board.size() || c>=board[0].size() || vis[r][c]==1 || board[r][c]!=word[i] )
            return false;
        vis[r][c]=1;
        bool res=dfs(i+1,r-1,c,board,word,vis) ||  dfs(i+1,r,c+1,board,word,vis)  || dfs(i+1,r+1,c,board,word,vis)  ||  dfs(i+1,r,c-1,board,word,vis);

    return res;        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>>vis(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(0,i,j,board,word,vis))return true;
            }
        }
        return false;
    }
};
