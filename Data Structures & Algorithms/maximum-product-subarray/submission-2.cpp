class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int max_sum =nums[0];
    for (int i = 0; i < n ; i++) {
        int current_sum = nums[i];
        res=max(res,cur);
        for (int j = i+1; j < n; j++){
            current_sum *= nums[j];
        max_sum = max(current_sum, max_sum);
        }
    }
    return max_sum;

    }
};
