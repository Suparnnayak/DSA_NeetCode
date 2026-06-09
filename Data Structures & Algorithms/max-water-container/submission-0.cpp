class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int l=0;
        int r=n-1;
        int maxi=0;
        while(l<r){
            int area=min(heights[l],heights[r])*(r-l);
            if(heights[l]<heights[r]){
                l++;
            }   
            else{
                r--;
            } 
        maxi=max(maxi,area);
        }
        return maxi;
    }
};
