class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int INF=2147483647;
        int drs[]={0,1,0,-1,0};
        queue<pair<int,int>>q;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)q.push({i,j});
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=r+drs[i];
                int ncol=c+drs[i+1];
                if(nrow>=0 && ncol >=0 && nrow <m && ncol<n && grid[nrow][ncol]==INF){
                    grid[nrow][ncol]=grid[r][c]+1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
};
