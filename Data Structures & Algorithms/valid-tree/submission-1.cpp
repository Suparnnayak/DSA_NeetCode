class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        if(edges.size()>n-1)return false;
        vector<vector<int>>adj(n);
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
         unordered_set<int>vis;
        if(!dfs(0,n,adj,vis))return false;
        return vis.size()==n;
    }
    bool dfs(int node,
         int parent,
         vector<vector<int>>& adj,
         unordered_set<int>& vis)
        {
            if(vis.count(node))
                return false;
            vis.insert(node);
            for(int nei:adj[node])
            {
                if(nei==parent)
                    continue;

                if(!dfs(nei,node,adj,vis))
                    return false;
            }
            return true;
        }
};
