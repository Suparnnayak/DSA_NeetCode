class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        for(char a:s){
            freq[a]++;
        }
        for(char a:t){
            freq[a]--;
        }
        for(auto &it:freq){
            if(it.second!=0)return false;
        }
        return true;        
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>>ans;
        vector<bool>vis(n,false);
        if(strs.empty())return ans;
        for(int i=0;i<n;i++){
            if(vis[i])continue;
            vector<string>res;
            res.push_back(strs[i]);
            vis[i]=true;
            for(int j=i+1;j<n;j++){
                if(!vis[j] && isAnagram(strs[i],strs[j])){
                    res.push_back(strs[j]);
                    vis[j]=true;
                }
            }
            ans.push_back(res);
        }
    return ans;
    }
}; 
    
