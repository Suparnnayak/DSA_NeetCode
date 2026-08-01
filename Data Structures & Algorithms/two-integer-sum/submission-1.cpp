class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int d=target-nums[i];
            if(m.find(d)!=m.end()){
                return {m[d],i};
            }            
            m.insert({nums[i],i});
        }
        return {};
    }
};
