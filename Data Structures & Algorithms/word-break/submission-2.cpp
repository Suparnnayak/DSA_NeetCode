class Solution {
private:
    bool f(string s, unordered_set<string>&st,vector<int>&dp,int a){
        if(a==s.size())return true;
        if(dp[a]!=-1)return dp[a];
        for(int i=a;i<s.size();i++){
            if(st.count(s.substr(a,i+1-a)) && f(s, st, dp, i+1)){
                dp[a]=true;
                return true;
            }
        }
        return dp[a]=false;
    }
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<int>dp(n,-1);   
        unordered_set<string>st(wordDict.begin(),wordDict.end()); 
        return f(s,st,dp,0);
    }
};
