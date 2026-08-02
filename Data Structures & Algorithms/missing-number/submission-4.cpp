class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==a){
                a++;
            }
            return a;
        }
        return 0;
    }
};
