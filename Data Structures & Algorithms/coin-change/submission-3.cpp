class Solution {
public:
    int f(int i,vector<int>& coins, int amount,vector<vector<int>>&dp){
        if(amount==0)return 0;
        if(amount<0 || i==coins.size())return 1e9;
        if(dp[i][amount]!=-1)return dp[i][amount];
        int p=1+f(i,coins,amount-coins[i],dp);
        int n_p=f(i+1,coins,amount,dp);
        return dp[i][amount]=min(p,n_p);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans= f(0,coins,amount,dp);
        return ans<1e9?ans:-1;
    }
};