class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_map<char,int>mp;
        int l=0,maxf=0;
        for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            while((r-l+1)-maxf>k){
                mp[l]--;
                l++;
            }
            res=max(r-l+1,res);
        }
        return res;
    }
};
