class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int f=intervals[0][1];
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        if(intervals.size()==1)return intervals;
        for(int i=1;i<intervals.size();i++){
            if(f>=intervals[i][0]){
                intervals[i-1][1]=max(f,intervals[i][1]);
                f=intervals[i-1][0];
                ans.push_back(intervals[i-1]);
            }
            else{
                ans.push_back(intervals[i]);
            }
        }    
        return ans;
    }
};
