class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(); 
        int ans=0;
        vector<int>l_max(n),r_max(n);
        for(int i=1;i<n;i++){
            l_max[i]=max(l_max[i-1],height[i-1]);
        }   
        for(int j=n-2;j>=0;j--){
            r_max[j]=max(r_max[j+1],height[j+1]);
        }
        for(int i=0;i<n;i++){
            int level=min(l_max[i],r_max[i]);
            if(level>height[i])ans+=level-height[i];
        }
        return ans;
    }
};
