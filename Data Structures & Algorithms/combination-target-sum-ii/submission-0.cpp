class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,target,ds,ans,candidates);
        return ans;
    }
    void f(int ind,int target,vector<int>&ds,vector<vector<int>>&ans,vector<int>& candidates){
        if(target==0)ans.push_back(ds);
        for(int i=ind;i<candidates.size();i++){
            if(i>ind && candidates[i]==candidates[i-1])continue;
            if(candidates[i]>target)break;
            ds.push_back(candidates[i]);
            f(i+1,target-candidates[i],ds,ans,candidates);
            ds.pop_back();
        }
    }
};
