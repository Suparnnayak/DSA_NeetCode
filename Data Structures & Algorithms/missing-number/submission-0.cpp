class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=a)return a;
            else a++;
        }    
        return 0;
    }
};
