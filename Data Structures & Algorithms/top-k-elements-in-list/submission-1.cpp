class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int>res;
        vector<pair<int,int>>ans;
        int n=nums.size();
        for(int num:nums){
            freq[num]++;
        }    
        for(auto &p:freq){
            ans.push_back({p.second,p.first});
        }
        sort(ans.rbegin(), ans.rend());
        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
