class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size(),node=0;
        vector<bool>vis(n,false);
        vector<int>dist(n,1000000);
        int edges=0,res=0;
        while(edges<n-1){
            vis[node]=true;
            int nextnode=-1;
            for(int i=0;i<n;i++){
                if(vis[i])continue;
                int curdist=abs(points[i][0]-points[node][0])+abs(points[i][1]-points[node][1]);
                dist[i]=min(curdist,dist[i]);
                if(nextnode == -1 || dist[i] < dist[nextnode])
                        nextnode = i;
            }
        res+=dist[nextnode];
        node=nextnode;
        edges++;
        }
        return res;
    }
};
