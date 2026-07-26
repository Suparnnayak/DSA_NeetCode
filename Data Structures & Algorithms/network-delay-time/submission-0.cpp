class Solution {
public:
    vector<int>dijkstra(vector<vector<pair<int,int>>>&adj,int n,int src){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,1e9);
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            auto [dis,node]=pq.top();
            pq.pop();
            if(dis>dist[node])continue;
            for(auto &it:adj[node]){
                int newnode=it.first;
                int wt=it.second;
                if(dis+wt<dist[newnode]){
                    dist[newnode]=wt+dis;
                    pq.push({dist[newnode],newnode});
                }
            }
        }
        return dist;
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto &it :times){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v,w});
        }
        vector<int>mintime=dijkstra(adj,n,k);
        int res=INT_MIN;
       for (int i = 1; i <= n; i++) {
            if (mintime[i] == 1e9)
                return -1;
            res = max(res, mintime[i]);
        }
        return res;
    }
};