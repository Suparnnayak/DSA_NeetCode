class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            int c=prices[i]-mini;
            p=max(p,c);
        }
        return p;
    }
};
