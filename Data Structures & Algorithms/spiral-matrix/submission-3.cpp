class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        vector<int>res;
        dfs(m,n,0,-1,0,1,res,matrix);
        return res;
    }
    void dfs(int row,int col,int r,int c,int dr,int dc,vector<int>&res,vector<vector<int>>& matrix){
        if(row==0 || col==0)return ;
        for(int i=0;i<col;i++){
            r+=dr;
            c+=dc;
            res.push_back(matrix[r][c]);
        }
        dfs(col,row-1,r,c,dc,-dr,res,matrix);
    }
};
