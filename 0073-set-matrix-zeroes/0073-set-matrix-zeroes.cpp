class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> matrix_ans = matrix;

        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++) {
                if(matrix[i][j]==0){
                    for(int k=0 ; k<cols ; k++){
                        matrix_ans[i][k] = 0;
                    }
                    for(int l=0 ; l<rows ; l++){
                        matrix_ans[l][j] = 0;
                    }
                }
            }
        }
        matrix = matrix_ans;
    }
};