class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string ans;
        string res;
        for(char c:s){
            while(res.find(c) != string::npos) {
                if(ans.size() < res.size())
                    ans = res;
                res.erase(res.begin());
            }
            res.push_back(c);
        }
        if(ans.size() < res.size())
            ans = res;
        return ans.size();
    }
};
