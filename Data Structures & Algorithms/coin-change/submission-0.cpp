class Solution {
public:
    int f(int s,vector<int>& coins, int amount){
        int n=coins.size();
        if(amount==0)return 0;
        if(amount <0 || s==n)return -1;
        int pick=f(s,coins,amount-coins[s]);
        int n_pick=f(s++,coins,amount);
        return min(pick,n_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        return f(0,coins,amount);        
    }
};
