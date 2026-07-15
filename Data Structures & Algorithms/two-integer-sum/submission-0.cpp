class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int dif=target-nums[i];
            if(m.find(dif)!=m.end()){
                return {m[dif],i};
            }
            m.insert({nums[i],i});
        }
        return {};
    }
};
