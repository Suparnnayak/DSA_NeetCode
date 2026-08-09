class Solution {
public:
    int f(int i,int j,string text1, string text2,vector<vector<int>>&dp){
        int m=text1.size();
        int n=text2.size();
        int p=0;int np=0;
        if(i==m || j==n)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        if(text1[i]==text2[j]){
            return dp[i][j]= 1+f(i+1,j+1,text1,text2,dp);
        }
        return dp[i][j]= max(f(i+1,j,text1,text2,dp),f(i,j+1,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size();
        int n=text2.size();
        vector<vector<int>>dp(m+1,(vector<int>(n+1,-1)));
        return f(0,0,text1,text2,dp);    
    }
};