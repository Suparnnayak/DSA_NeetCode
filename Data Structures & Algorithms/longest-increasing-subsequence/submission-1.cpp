class Solution {
public:
    int f(int i,int j,vector<int>& nums, vector<vector<int>>&dp){
        if(i==nums.size())return 0;
        if(dp[i][j+1]!=-1)return dp[i][j+1];
        int LIS=f(i+1,j,nums,dp);
        if(j==-1 || nums[i]>nums[j])LIS=max(LIS,1+f(i+1,i,nums,dp));
        return dp[i][j+1]=LIS;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(0,-1,nums,dp);
    }
};
