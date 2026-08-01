class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& grid) {
        vector<int>res;
        int t=0,b=grid.size()-1,l=0,r=grid[0].size()-1;
        while(l<=r && t<=b){
            for(int i=l;i<=r;i++)res.push_back(grid[t][i]);
            t++;
            for(int i=t;i<=b;i++)res.push_back(grid[i][r]);
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--)res.push_back(grid[b][i]);
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--)res.push_back(grid[i][l]);
                l++;
            }
        }
        return res;
    }
};
