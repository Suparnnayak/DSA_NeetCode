class Solution {
private:
    void dfs(vector<vector<int>>&adj,vector<bool>&vis,int node){
        vis[node]=true;
        for(int n:adj[node]){
            if(!vis[n])dfs(adj,vis,n);
        }
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<bool>vis(n,false);
        for(const auto edge :edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int res=0;
        for(int node=0;node<n;node++){
            if(!vis[node]){
                res++;
                dfs(adj,vis,node);
            }
        }
        return res;
    }
};
