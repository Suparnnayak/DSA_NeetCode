class Solution {
public:
    bool dfs(int i,vector<vector<int>>&adj,vector<int>&vis,vector<int>&pathv){
        vis[i]=1;
        pathv[i]=1;
        for(auto  it:adj[i]){
            if(!vis[it]){
                if(dfs(it,adj,vis,pathv))return true;
            }
            else if(pathv[it])return true;
        }
    pathv[i]=0;
    return false;

    }
    bool canFinish(int v, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(v);
        for(auto it :prerequisites){
            adj[it[1]].push_back(it[0]);
        } 
        vector<int>vis(v,0);
        vector<int>pathv(v,0);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathv))return false;
            }
        }
        return true;
    }
};
