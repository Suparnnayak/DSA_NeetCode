class Solution {
public:
    int f(int n,vector<int>& nums,vector<int>&dp){
        if(n==0)return nums[n];
        if(n<0)return 0;
        if(dp[n]!=-1)return dp[n];
        int pick=nums[n]+f(n-2,nums,dp);
        int n_pick=f(n-1,nums,dp);
        return dp[n]=max(pick,n_pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>temp1,temp2;
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        int a = f(temp1.size()-1, temp1, dp1);
        int b = f(temp2.size()-1, temp2, dp2);
        return max(a,b);
    }
};
