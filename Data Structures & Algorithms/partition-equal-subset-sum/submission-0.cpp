class Solution {
public:
    bool f(int i,vector<int>& nums,int target){
        if(target<0 )return false;
        if( i==nums.size())return target==0;
        return f(i+1,nums,target-nums[i])||f(i+1,nums,target);

        
    }
    bool canPartition(vector<int>& nums) {
        int total=accumulate(nums.begin(),nums.end(),0);
        if(total%2!=0)return false;
        return f(0,nums,total/2);    
    }
};