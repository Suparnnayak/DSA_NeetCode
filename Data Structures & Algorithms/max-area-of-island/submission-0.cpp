class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0;
        queue<pair<int,int>>q;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1  && !vis[i][j]){
                    q.push({i,j});
                    vis[i][j]=1;
                    int area=1;
                    while(!q.empty()){
                        int r=q.front().first;
                        int c=q.front().second;
                        q.pop();
                        int dr[]={-1,0,1,0};
                        int dc[]={0,1,0,-1};
                        for(int i=0;i<4;i++){
                            int nr=dr[i]+r;
                            int nc=dc[i]+c;
                            if(nr>=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]==1 && vis[nr][nc]!=1){
                                area++;
                                q.push({nr,nc});
                                vis[nr][nc]=1;
                            }
                        }
                    }
                    maxi=max(maxi,area);
                }
            }
        }   
        return maxi; 
    }
};
