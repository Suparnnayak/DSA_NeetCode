class Solution {
public:
    int f(vector<int>&nums){
        int p=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)p*=nums[i];
        }
    return p;
    }
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)zeroes++;
        }
        vector<int>res(n,0);
        if(zeroes>1)return res;
        int p=f(nums);
        for(int i=0;i<nums.size();i++){
            if(zeroes==1){
                if(nums[i]==0)res[i]=p;
                else res[i]=0;
            }
            else{
                res[i]=p/nums[i];
            }
        }
        return  res;
    }
};
