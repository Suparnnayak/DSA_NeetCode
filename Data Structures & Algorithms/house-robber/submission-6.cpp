class Solution {
public:
    int f(int n,vector<int>nums){

        if(n>=nums.size())return 0;
        int pick=nums[n]+f(n+2,nums);
        int n_pick=f(n+1,nums);
    return max(n_pick,pick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        return f(0,nums);    
    }
};




