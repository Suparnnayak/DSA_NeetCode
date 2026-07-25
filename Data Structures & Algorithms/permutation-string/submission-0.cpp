class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.size();i++){
            for(int j=i;j<s2.size();j++){
                string p=s2.substr(i,j-i+1);
                sort(p.begin(),p.end());
                if(p==s1)return true;
            }
        }
        return false;
    }
};
