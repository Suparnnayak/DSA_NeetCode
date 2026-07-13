class Solution {
public:
    int f(vector<int>& nums){
        int p = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0)
                p *= nums[i];
        }
        return p;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        int zeroCount = 0;
        for(int x : nums){
            if(x == 0) zeroCount++;
        }

        vector<int> o(n, 0);

        if(zeroCount > 1)
            return o;

        int prod = f(nums);

        for(int i = 0; i < n; i++){
            if(zeroCount == 1){
                if(nums[i] == 0)
                    o[i] = prod;
                else
                    o[i] = 0;
            }
            else{
                o[i] = prod / nums[i];
            }
        }

        return o;
    }
};