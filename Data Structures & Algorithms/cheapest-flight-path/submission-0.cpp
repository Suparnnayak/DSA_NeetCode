class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>>adj[n];
        for(auto i :flights){
            adj[i[0]].push_back({i[1],i[2]});
        }    
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dist(n,1e9);
        dist[src]=0;
        while(!q.empty()){
            auto it=q.front();
            int stop=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            q.pop();
            if(stop>k)continue;
            for(auto a:adj[node]){
                int nodew=a.first;
                int edw=a.second;
                if(stop<=k && cost+edw<dist[nodew]){
                    dist[nodew]=cost+edw;
                    q.push({stop+1,{nodew,cost+edw}});
                }
            }
        }
        if(dist[dst]==1e9)return -1;
        return dist[dst];
        }
};

