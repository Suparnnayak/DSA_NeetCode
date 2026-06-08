class Solution {
public:
    int f(int n,vector<int>nums,vector<int>&dp){
        if(n>=nums.size())return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+f(n+2,nums,dp);
        int n_pick=f(n+1,nums,dp);
    return dp[n]=max(n_pick,pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);    
    }
};




