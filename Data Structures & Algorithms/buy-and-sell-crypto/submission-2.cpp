class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int c=prices[0];
        for(int i=1;i<prices.size();i++){
            c=min(c,prices[i]);
            p=max(p,prices[i]-c);
        }
        return p;
    }
};
