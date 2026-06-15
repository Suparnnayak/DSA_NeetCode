class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=1;
        int cnt=1;
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1==nums[i+1])cnt++;
            else if(nums[i+1] == nums[i])continue;
            else cnt=1;
            maxi=max(maxi,cnt);
        }
        return maxi;   
    }
};
