class Solution {
public:
    int f(int i,vector<int>& nums,vector<int>&dp){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        int p=nums[i]+f(i+2,nums,dp);
        int n_p=f(i+1,nums,dp);
        return dp[i]=max(p,n_p);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);
    }
};
