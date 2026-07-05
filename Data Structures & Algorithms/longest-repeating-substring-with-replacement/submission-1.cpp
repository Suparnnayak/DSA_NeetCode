class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_set<char>charset(s.begin(),s.end());
        for(char c:charset){
            int cnt=0,l=0;
            for(int r=0;r<s.size();r++){
                if(c==s[r])cnt++;
                while((r-l+1)-cnt>k){
                    if(s[l]==c)cnt--;
                    l++;
                }       
                res=max(res,r-l+1);  
            }
        }    
        return res;
    }
};
