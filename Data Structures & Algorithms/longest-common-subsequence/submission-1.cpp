class Solution {
public:
    int f(int i,int j,string text1, string text2){
        int m=text1.size();
        int n=text2.size();
        int p=0;int np=0;
        if(i==m || j==n)return 0;
        if(text1[i]==text2[j]){
            return 1+f(i+1,j+1,text1,text2);
        }
        return max(f(i+1,j,text1,text2),f(i,j+1,text1,text2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        return f(0,0,text1,text2);    
    }
};