class Solution {
public:
    bool f(int a,unordered_set<string>st,string s,vector<int>&dp){
        if(a==s.size())return true;
        if(dp[a]!=-1)return dp[a];
        for(int i=a;i<s.size();i++){
            if(st.count(s.substr(a,i-a+1))){
                if(f(i+1,st,s,dp)){
                    dp[a]=true;
                    return true;
                }
            }
        }
        return dp[a]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string>st(wordDict.begin(),wordDict.end());
        vector<int>dp(n,-1);
        return f(0,st,s,dp);    
    }
};