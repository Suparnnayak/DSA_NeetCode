class Solution {
public:
    int f(int s,vector<int>& coins, int amount,vector<vector<int>>&dp){
        int n=coins.size();
        if(amount==0)return 0;
        if(amount <0 || s==n)return -1;
        if(dp[s][amount]!=-1)return dp[s][amount];
        int pick=1+f(s,coins,amount-coins[s],dp);
        int n_pick=f(s+1,coins,amount,dp);
        return dp[s][amount]=min(pick,n_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return f(0,coins,amount,dp);        
    }
};
