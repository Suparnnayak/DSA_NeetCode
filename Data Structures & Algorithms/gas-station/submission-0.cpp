class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int g=accumulate(gas.begin(),gas.end(),0);
        int c=accumulate(cost.begin(),cost.end(),0);
        if(g<c)return -1;
        int total=0;
        int ans=0;
        for(int i=0;i<cost.size();i++){
            total=total-(cost[i]-gas[i]);
            if(total<0){
                total=0;
                ans=i+1;
            }
        }  
        return ans;
    }
};
