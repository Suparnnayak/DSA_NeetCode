class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=0,suf=0;
        int maxi= nums[0];;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            pre=nums[i]*(pre==0?1:pre);
            suf=nums[n-1-i]*(suf==0?1:suf);
            maxi=max(maxi,max(suf,pre));
        }
        return maxi;
    }
};
