class Solution {
public:
    bool f(int i,vector<int>& nums,int target,vector<vector<int>>&dp){
        if(target<0 )return false;
        if( i==nums.size())return target==0;
        if(dp[i][target]!=-1)return dp[i][target];
        dp[i][target]=f(i+1,nums,target-nums[i],dp)||f(i+1,nums,target,dp);
        return dp[i][target];
        
    }
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
         vector<vector<int>>dp(n,vector<int>(total/2+1,-1));
        if(total%2!=0)return false;
        return f(0,nums,total/2,dp);    
    }
};