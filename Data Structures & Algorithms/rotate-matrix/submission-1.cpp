class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int top=0,bottom=matrix.size()-1;
        while(top<bottom){
            for(int i=0;i<matrix[0].size();i++){
                int temp=matrix[top][i];
                matrix[top][i]=matrix[bottom][i];
                matrix[bottom][i]=temp;
            }
            top++;
            bottom--;
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[0].size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
};
