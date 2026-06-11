class Solution {
public:
    bool f(string s, unordered_set<string>&st,vector<int>&dp,int a){
        if(a==s.size())return true;
        if(dp[a]!=-1)return true;
        for(int i=a;i<s.size();i++){
            if(st.count(s.substr(a,i+1-a))){
                dp[a]=true;
                return true;
            }
        }
        return dp[a]=false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=wordDict.size();
        vector<int>dp(n+1,-1);   
        unordered_set<string>st(wordDict.begin(),wordDict.end()); 
        return f(s,st,dp,0);
    }
};
