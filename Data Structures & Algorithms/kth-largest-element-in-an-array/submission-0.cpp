class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>res;
        for(int num:nums){
            res.push(num);
            if(res.size()>k)res.pop();
        }
        return res.top();
    }
};
