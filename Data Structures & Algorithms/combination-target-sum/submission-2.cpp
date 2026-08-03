class Solution {
public:
    void f(int i,vector<int>& nums, int target, vector<vector<int>>&ans,vector<int>&ds){
        if(i==nums.size()) {
                if(target==0){
                ans.push_back(ds);
            }
            return ;
        }
        if(target>=nums[i]){
            ds.push_back(nums[i]);
            f(i,nums,target-nums[i],ans,ds);
            ds.pop_back();
        }
        f(i+1,nums,target,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,nums,target,ans,ds);
        return ans;
    }
};
