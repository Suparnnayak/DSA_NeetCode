class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;int sum=0; int max=0;
        if(nums.size()==0)return 0;
        int n=nums.size()-1;
        while(i<n){
            if(nums[i+1]!=nums[i]){
                if(nums[i+1]==nums[i]+1){
                    sum++;
                    if(sum>max)max=sum;
                }
                else{
                    sum=0;
                }
            }
            i++;
        }    
        return max+1;
    }
};