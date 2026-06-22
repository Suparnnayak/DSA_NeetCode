class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }    
        vector<pair<int,int>>arr;
        for(auto &p: freq){
            arr.push_back({p.first,p.second});
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i].second==1)continue;
            return arr[i].first;
        }
        return 0;
    }
};