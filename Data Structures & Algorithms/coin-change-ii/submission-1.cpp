class Solution {
public:
    int f(int s,int amount, vector<int>& coins,  vector<vector<int>>&dp){
        if(amount==0)return 1;
        int n=coins.size();
        if(amount<0 || s==n)return 0;
        if(dp[s][amount] != -1)return dp[s][amount];
        int pick=f(s,amount-coins[s],coins,dp);
        int n_pick=f(s+1,amount,coins,dp);
        return dp[s][amount] = pick + n_pick;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount + 1, -1));
        return f(0,amount,coins,dp);    
    }
};
