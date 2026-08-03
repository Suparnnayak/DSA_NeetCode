class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>se;
        int n=s.size();
        int l=0;
        int res=0;
        for(int r=0;r<n;r++){
            while(se.find(s[r])!=se.end()){
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
    }
};
