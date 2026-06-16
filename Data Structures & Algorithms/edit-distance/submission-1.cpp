class Solution {
public:
    int f(int i,int j,string word1, string word2,vector<vector<int>>&dp){
        int m=word1.size();
        int n=word2.size();
        if(i==m)return n-j;
        if(j==n)return m-i;
        if(dp[i][j]!=-1)return dp[i][j];
        if(word1[i]==word2[j])return dp[i][j]=f(i+1,j+1,word1,word2,dp);
        else{
            return dp[i][j]=1+min({
                f(i+1,j,word1,word2,dp),
                f(i,j+1,word1,word2,dp),
                f(i+1,j+1,word1,word2,dp),
            });
        }
    }
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size(); 
        vector<vector<int>>dp(m+1,vector<int>(n+1, -1));
        return f(0,0,word1,word2,dp);   
    }
};