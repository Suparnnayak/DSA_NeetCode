class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int maxarea=0;
        for(int i=0;i<n;i++){
            int height=heights[i];
            int right=i+1;
            while(right<n && heights[right]>=height){
                right++;
            }
            int left=i;
            while(left>=0 && heights[left]>=height){
                left--;
            }
            right--;
            left++;
            maxarea=max(maxarea,(right-left+1)*height);
        }
     return maxarea;   
    }
};
