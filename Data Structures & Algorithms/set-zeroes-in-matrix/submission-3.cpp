class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        bool z=false;
        int n=matrix[0].size();
        for(int row=0;row<m;row++){
            if(matrix[row][0]==0) z=true;
            for(int col=1;col<n;col++){
                if(matrix[row][col]==0){
                    matrix[row][0]=0;
                    matrix[0][col]=0;
                }
            }
        }
        for(int row=m-1;row>=0;row--){
            for(int col=n-1;col>=0;col--){
                if(matrix[0][col]==0 || matrix[row][0]==0)matrix[row][col]=0;
            }
            if(z)matrix[row][0]=0;
        }
    }
};
