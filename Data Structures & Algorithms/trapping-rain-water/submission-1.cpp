class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int l_max=height[l],r_max=height[r];
        int ans=0;
        while(l<r){
            if(l_max<r_max){
                l++;
                l_max=max(l_max,height[l]);
                ans+=l_max-height[l];
            }
            else{
                r--;
                r_max=max(r_max,height[r]);
                ans+=r_max-height[r];
            }
        }   
        return ans;
    }
};
