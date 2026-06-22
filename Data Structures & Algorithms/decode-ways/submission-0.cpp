class Solution {
public:
    int f(int i,string s,vector<int>&dp){
        int n=s.size();
        int res=0;
        if(i==n)return 1;
        if(dp[i]!=-1)return dp[i];
        if(s[i]!='0')res+=f(i+1,s,dp);
        if(i+1<n && (s[i]=='1' || s[i]=='2'&& s[i+1]<='6')){
            res+=f(i+2,s,dp);
        }    
        return dp[i]= res;
    }
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        return f(0,s,dp);    
    }
};