class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int cnt=0;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<ans.back()[1]){
                ans.back()[1]=min(ans.back()[1],intervals[i][1]);
                cnt+=1;
            }
            else{
                ans.push_back(intervals[i]);
            }
        }
        return cnt;
    }
};
