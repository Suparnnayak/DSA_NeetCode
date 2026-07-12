class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi=0;
        int i=1;
        int temp=0;
        int n=nums.size();
        if(n==0)return 0;
            while(i<n){
            if(nums[i]!=nums[i-1]){
                if(nums[i]==nums[i-1]+1){
                    temp++;   
                }
                else{
                    temp=0;
                }
            }
            i++;
            maxi=max(maxi,temp);
            }
            return maxi+1;
        }
};